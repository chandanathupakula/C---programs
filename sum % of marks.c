//program to find sum and percentage of marks
#include<stdio.h>
int main()
{
	int i,marks[6];
	int percentage,sum=0;
	for(i=0;i<6;i++)
	{
	    printf("enter %d marks",i+1);
	    scanf("%d",&marks[i]);
	}
	for(i=0;i<6;i++)
	{
	   sum=sum+marks[i];
	}
	percentage=(sum/600.0)*100;
	printf("The total marks:%d\n",sum);
	printf("%d",percentage);
}
