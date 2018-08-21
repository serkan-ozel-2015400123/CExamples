#include <stdio.h>

main(){
 
    int tab, blank, newline;
    tab =0;
    blank=0;
    newline =0;
    int c;

    while((c = getchar())!= EOF){ // EOF signal can be send through terminal in unix by pressing CTRL+D.

	if(c=='\t') tab++;
	if(c=='\n') newline++;
	if(c==' ') blank++;

    }

    printf("There are %d tabs, %d blanks and %d newline characters in the input.\n",tab,blank,newline);

}
