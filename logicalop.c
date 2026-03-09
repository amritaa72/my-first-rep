  //program to show the usage of logical operators
#include <stdio.h>


void main()
{
    int a,b,c,d,e,f;
    int res1, res2,res3;
    printf("Read a,b,c,d \n") ;//formatted specofiers are never given spaces
    scanf("%d%d%d%d",&a,&b,&c,&d); //bool not supported in c
    res1=(a>b)&&(c>d);
    printf("res%d",res1);
    
    //or
    //printf("Read e and f \n");
    //scanf("%d%d",&e,&f);
    res2=(a>b)||(c>d);
    printf("Res=%d",res2);
    
    //not
    res3=!!b;
    printf("RESULT=%d",res3);
    
}
