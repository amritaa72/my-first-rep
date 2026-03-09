#include <stdio.h>
//program to show the usage of arithmetic operators in C

int main(){
    int a,b,c;
    a=10;
    b=19;
    c=5;

    //addition
    int sum=a+b+c;
    printf("\n");
    printf("Addition of a,b,c is %d ",sum);

    //subtraction
    int diff=a-b;
    printf("\n");
    printf(" Subtraction of a and b is %d",diff);

    //Multiplication
    int product=a*b;
    printf("\n");
    printf("Multiplication of a and b is %d",product);

    //Division
    int quotient=b/a;
    printf("\n");
    printf("Division of b by a is %d", quotient);

    //Modulus-Remainder
    int remainder= b%a;
    printf("\n");
    printf(" Remainder of the mudulo division of b by a is %d",remainder);

}
