//program to read string using gets and puts functions
#include<stdio.h>
#include<string.h>
main()
{
	char name[30];
	printf("enter your name");
	gets(name);
	printf("My name is :\n");
	puts(name);
}
