//program to swap two numbers using third variable
#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter two numbers a,b");
	scanf("%d %d",&a,&b);
	printf("Before swapping:a=%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping:a=%d,b=%d\n",a,b);
}
