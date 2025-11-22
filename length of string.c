//program to find length of the string
#include<stdio.h>
int main()
{
	char mystr[20];
	int i,len=0;
	printf("enter a string");
	gets(mystr);
	for(i=0;mystr[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("The length of the string is %d",len);
}
