//program to find largest of 3 nos using ternary
#include <stdio.h>
void main(){
    float a,b,c,max;
    printf("ENTER A B C");
    scanf("%f%f%f",&a,&b,&c);
    
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("MAX OF 3 NO.S %f",max);
}
