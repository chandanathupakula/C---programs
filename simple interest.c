//program to input principle,time and rate(P,T,R) from user and find simple interest
#include<stdio.h>
int main()
{
	float principle,time,rate,simpleInterest;
	printf("enter principle amount,principle");
	scanf("%f",&principle);
	printf("enter time(in years),time");
	scanf("%f",&time);
	printf("enter rate of interest,rate");
	scanf("%f",&rate);
	simpleInterest=principle*time*rate/100;
	printf("simpleInterest=%.2f\n",simpleInterest);
}
