#include <stdio.h>
typedef enum { false, true } bool;
main(){
    int c;
    bool b; // Holds the value if blank has started. True > last char was blank, False > last char was not blank.
    while((c = getchar()) != EOF){  // c=5 is also an expression where the value is the value of c after the assignment.
 	
	    if(b && c==' ');
	    else if(!b && c==' '){
		putchar(' ');
     		b = true;		
	    }else{
		b = false;
		putchar(c);
	    }
    }
}

