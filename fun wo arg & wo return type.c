//Functions without arguments and without return type
#include<stdio.h>
void addition();
main()
{
	addition();
	addition();
	addition();
}
void addition()
{
	int a,b,c;
	printf("\n enter a and b values");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("The sum is %d",c);
}
