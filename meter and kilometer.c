//Program to input lenght in centimeter and convert it into meter and kilometer
#include<stdio.h>
int main()
{
	float cm,meters,kilometers;
	printf("enter the lenght in cm");
	scanf("%f",&cm);
	meters=cm/100.0;
	kilometers=cm/100000.0;
	printf("lenght in meters:%.2f m\n",meters);
	printf("lenght in kilometers:%.5f km\n",kilometers);
}
