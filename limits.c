#include <stdio.h>
#include <limits.h>

main(){

unsigned char uc;
signed char sc;
unsigned short us;
signed short ss;
unsigned int ui;
int si;
unsigned long int ul;
signed long int sl;


float f;
double d;
long double ld;

printf("Minimum limit of a signed char is: %i \n",SCHAR_MIN);
printf("Maximum limit of a signed char is: %i \n",SCHAR_MAX);
printf("Maximum limit of an unsigned char is: %i \n",UCHAR_MAX);
printf("Minimum limit of a char is: %i \n",CHAR_MIN);
printf("Maximum limit of a char is: %i \n",CHAR_MAX);
printf("Minimum limit of a signed short int is: %i \n",SHRT_MIN);
printf("Maximum limit of a signed short int is: %i \n",SHRT_MAX);
printf("Maximum limit of an unsigned short int is: %i \n",USHRT_MAX);
printf("Minimum limit of a int is: %i \n",INT_MIN);
printf("Maximum limit of a int is: %i \n",INT_MAX);
printf("Maximum limit of an unsigned int is: %u \n",UINT_MAX);
printf("Minimum limit of a signed long int is: %li \n",LONG_MIN);
printf("Maximum limit of a signed long int is: %li \n",LONG_MAX);
printf("Minimum limit of an unsigned long int is: %lu \n",ULONG_MAX);
printf("Minimum limit of a signed long long int is: %lli \n",LLONG_MIN);
printf("Maximum limit of a signed long long int is: %lli \n",LLONG_MAX);
printf("Maximum limit of an unsigned long long int is: %llu \n",ULLONG_MAX);

}
