//conversion of celsius temp to farenhiet
#include<stdio.h>
main()
{
	float ctemp,Ftemp;
	printf("enter temp in celsius");
	scanf("%f",&ctemp);
	Ftemp=1.8*ctemp+32;
	printf("The temp in Farenheit is %f",Ftemp);
}
