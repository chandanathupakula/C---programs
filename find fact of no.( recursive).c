//program to find factorial of a number(Recursive)
#include<stdio.h>
int fact(int);
main()
{
	int n,factorial;
	printf("enter n value");
	scanf("%d",&n);
	factorial=fact(n);
	printf("The factorial is %d",factorial);
}
int fact(int x)
{
	int result;
	if(x==0)
	{
		return 1;
	}
	result=x*fact(x-1);
	return result;
}
