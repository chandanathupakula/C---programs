//Area of circle
#include<stdio.h>
#define pi 3.14
main()
{
	float r,A;
	printf("enter radius");
	scanf("%f",&r);
	A=pi*r*r;
	printf("The area of circle is %0.2f",A);
}
