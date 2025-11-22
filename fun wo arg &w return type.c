//functions without arguments and return type
#include<stdio.h>
int addition();
main()
{
	int result;
	result=addition();
	result=addition();
	printf("The result is %d",result);
}
int addition()
{
	int a,b,c;
	printf("enter a and b values");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;

}
