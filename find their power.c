//program to input two numbers from user and find their power
#include<stdio.h>
#include<math.h>
int main()
{
	double base,exponent,result;
	printf("enter base number:base");
	scanf("%lf",&base);
	printf("enter exponent number:exponent");
	scanf("%lf",&exponent);
	result=pow(base,exponent);
	printf("%.2lf^%.2lf=%.2lf\n",base,exponent,result);
}

