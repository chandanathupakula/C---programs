//program to find max and min of two numbers without using any loop or condition
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,maximum,minimum;
	printf("enter two integers:a,b");
	scanf("%d %d",&a,&b);
	maximum=(a+b+abs(a-b))/2;
	minimum=(a+b-abs(a-b))/2;
	printf("maximum=%d\n",maximum);
	printf("minimum=%d\n",minimum);
}
