#include <stdio.h>

#define IN 1
#define OUT 0

// Bare-bones version of the unix command wc
main(){

    int c,nc,nw,nl,state;
    
    nc = nw = nl =  0;
    
    state = OUT;

    while((c = getchar()) != EOF){
	nc++;


	if(c=='\t' || c ==' ' || c == '\n' ){
	   state = OUT;
	   if(c=='\n')nl++; 
	}else if(state==OUT){
	    state = IN;
	    nw++;
	}
	


    }


	printf("%d %d %d\n",nl,nw,nc);



}
