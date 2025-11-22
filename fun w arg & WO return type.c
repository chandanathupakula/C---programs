//functions with arguments& without return type
#include<stdio.h>
void addition(int,int);
main()
{
	int a,b;
	printf("enter a and b values");
	scanf("%d %d",&a,&b);
	addition(20,50);
	addition(5,50);
}
void addition(int p,int q)
{
	int result;
	result=p+q;
	printf("The result is %d",result);
}
