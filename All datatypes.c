/*write a simple program to read int,float,char and string using scanf() and display using printf() in all the above given platforms.*/
#include<stdio.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("enter a integer");
	scanf("%d",&x);
	printf("enter floating point number");
	scanf("%f",&y);
	printf("enter a character");
	scanf("\n");
	scanf("%c",&ch);
	printf("enter a word");
	scanf("%s",s);
	printf("The integer is %d\n",x);
	printf("The floating point number is %f\n",y);
	printf("The character is %c\n",ch);
	printf("The string is %s\n",s);
}
