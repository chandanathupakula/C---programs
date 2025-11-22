//simple interest & compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principle amount");
	scanf("%f",&p);
	printf("enter time period");
	scanf("%f",&t);
	printf("enter rate of interest");
	scanf("%f",&r);
	si=p*t*r/100;
	ci=p*pow(1+r/100,t)-p;
	printf("The simple interest is %0.2f\n",si);
	printf("The compound interest is %0.1f",ci);
}
