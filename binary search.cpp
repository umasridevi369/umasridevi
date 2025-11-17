#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int key=50,found=0,low=0,high=5,mid;
	while(low<high)
	{
		mid=(low+high/2);
		if(key==a[mid])
		{
			found=1;
			break;
		}
		else if(key<a[mid])
		{
		high=mid-1;	
		}
		else
		{
			low=mid+1;
		}
	}
	if(found==1)
	{
		printf("element found");
	}
	else
	{
		printf("element not found");
	}
	return 0;
}
