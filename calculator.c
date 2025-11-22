#include<stdio.h>
main()
{
	int n1,n2;
	char op;
	printf("enter the two numbers");
	scanf("%d %d",&n1,&n2);
	printf("enter the operater(+,-,*,/,%)");
	scanf("\n");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
		printf("The sum is %d",n1+n2);
		break;
		case '-':
		printf("The difference is %d",n1-n2);
		break;
		case '*':
		printf("The multiplication is %d",n1*n2);
		break;
		case '/':
		printf("The division is %d",n1%n2);
		break;
		default:
		printf("invalid operator");
	}
		
}
