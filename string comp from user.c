//program to read a string completely a string completely from user
#include<stdio.h>
int main()
{
	char name[20];
	printf("enter your name");
	scanf("%[^\n]s",name);
	printf("My name is %s",name);
}
