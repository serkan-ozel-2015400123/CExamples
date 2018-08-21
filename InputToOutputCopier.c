#include <stdio.h>
// Little "cat"
main(){

    int c;
    
    while((c = getchar()) != EOF)  // c=5 is also an expression where the value is the value of c after the assignment.
	putchar(c);
}

