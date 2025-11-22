//Program to input principle(amount),time and rate(P,T,R) and find compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	double principle,time,rate,compoundInterest,amount;
	printf("enter principle amount,principle");
	scanf("%lf",&principle);
	printf("enter time(in years),time");
	scanf("%lf",&time);
	printf("enter rate of interest,rate");
	scanf("%lf",&rate);
	amount=principle*pow((1+rate/100),time);
	compoundInterest=amount-principle;
	printf("compoundInterest=%.2lf\n",compoundInterest);
	printf("Total amount=%.2lf\n",amount);
}
