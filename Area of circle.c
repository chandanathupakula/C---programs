//program to find area of a circle
#include<stdio.h>
#define pi 3.14159
int main()
{
	float radius,area;
	printf("enter the radius of the circle");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("Area of the circle=%.2f\n",area);
}
