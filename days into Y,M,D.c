//complete the c program to convert days into years,months and days
#include<stdio.h>
int main()
{
	int days,years,months;
	printf("enter total number of days,days");
	scanf("%d",&days);
	years=days/365;
	days=days%365;
	months=days/30;
	days=days%30;
	printf("years=%d\n",years);
	printf("months=%d\n",months);
	printf("days=%d\n",days);
}
