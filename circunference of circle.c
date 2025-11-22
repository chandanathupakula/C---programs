//program to find circumference of a circle
#include<stdio.h>
#define pi 3.14159
int main()
{
	float radius,circumference;
	printf("enter the radius of the circle");
	scanf("%f",&radius);
	circumference=2*pi*radius;
	printf("circumference of the circle=%.2f\n",circumference);
}
