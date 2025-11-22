//Binary search
#include<stdio.h>
int main()
{
	int a[10],pos,mid,key;
	int low=0,high=9;
	int i=0;
	printf("enter 10 elements in ascending order");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("enter the search element");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			pos=mid;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
	}
	printf("The key element is found in %d position",pos);
}
