//program of call by value
#include<stdio.h>
void swap(int,int);
main()
{
	int a=2,b=3;
	printf("Before swaping a=%d,b=%d\n",a,b);
	swap(a,b);
	printf(" In main function After swaping a=%d,b=%d\n",a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf(" In swap funtion After swaping a=%d,b=%d\n",a,b);
}
