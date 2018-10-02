
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{

    int n = 0; // this is the number of indexes we are going to get
    scanf("%d",&n); // read n from input

    int indexes[n]; // array to store n variables read afterwards

    for(int i=0;i<n;i++){ // store n variables to the array "indexes"
        scanf("%d",&indexes[i]);
    }

    bool *isPrime = malloc(2750159); // corresponding array to "numbers" array. holds if a number is prime or not. ex: if is

    if(!isPrime ){
        printf("cannot allocate memory");
        return 1;
    }else{ // o/w initialize all bits to 1 for isPrime and initialize all elements to numbers = index +1 for "numbers"
        int counter = 0;
        while(counter < 2750159){
            isPrime[counter] = true;
            counter++;
        }
    }

    isPrime[0] = false; // set for "1"
    isPrime[1] = true; // set for "2"

    for(int j = 1; j< 2750159;j++){ // sieve algorithm to make some indexes false i.e non prime
        if(isPrime[j]){
            int counter = 2*j+2;
            while(counter<2750159){
                isPrime[counter-1] = false;
                counter += j+1;
            }
        }
    }

    int * primes = (int*) malloc(sizeof(int)*200000); // hold the founded primes in this array. The 200000 size is enough for this problem

    int primeCounter = 0;

    for(int i = 0;i<2750159;i++){  // extract primes from "isPrime" array into "primes" array for convenience.
        if(isPrime[i]){
            primes[primeCounter] = i+1;
            primeCounter++;
        }
    }

    for(int i=0;i<n;i++){// given we have "primes" array correctly we can print the nth primes given by input.
        printf("%d ",primes[indexes[i]-1]);
    }

    free(isPrime);
    free(primes);

    return 0;
}
