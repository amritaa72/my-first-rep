//Program to find the area of  square triangle rectangle circle and circumference of circle
#include <stdio.h>
#define pi 3.1419

float main(){
    float squareside, squarearea;
    printf("Enter side of square:");
    scanf("%f",&squareside);

    squarearea=squareside*squareside;
    printf("Area of square is %f",squarearea);

    float base, height, trianglearea;
    printf("\nEnter base and height of triangle:");
    scanf("%f %f",&base, &height);

    trianglearea=0.5*base*height;
    printf("Area of triangle is %f", trianglearea);

    float length, width, rectanglearea;
    printf("\n Enter length and width of the rectangle: ");
    scanf("%f %f",&length,&width);

    rectanglearea=length*width;
    printf("Area of rectangle is %f", rectanglearea);

    float radius, circlearea, circumference;
    printf("\n Enter radius of the circle: ");
    scanf("%f",&radius);

    circlearea=pi*radius*radius;
    circumference=2*pi*radius;
    printf("Area of circle is %f", circlearea);
    printf("\n Circumference of circle is %f", circumference);

    

}