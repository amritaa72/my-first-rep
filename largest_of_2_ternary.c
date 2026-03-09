//program to find largest of 2 no.s using ternary
#include <stdio.h>
void main()
{
    float a,b,max;
    printf("ENTER VALUE OF A AND B");
    scanf("\n%f%f",&a,&b);
    max=(a>b)?a:b;
    printf("\nMAX%f",max);
}
