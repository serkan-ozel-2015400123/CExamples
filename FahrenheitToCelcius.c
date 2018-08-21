#include <stdio.h>

main(){

float celcius, fahr; // Make these float to be able to calculate decimal points.


#define UPPER 300
#define LOWER 0
#define STEP 20
fahr = UPPER; // Start fahr from "lower" and increment is by "step" until it reaches "upper".

printf("Fahrenheit\tCelcius\n");

while(fahr >= LOWER){
    celcius = 5 * (fahr - 32) / 9;
    printf("%3.0f \t\t %6.1f \n",fahr,celcius); // Print fahr as float with at least 3 width and 0 decimal point. 
    fahr = fahr - STEP; // ^ Print celcius as float with at least 6 width and 1 decimal point.
}

}

