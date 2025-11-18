#include<stdio.h>
int add(int x,int y);
int main()
{
	int a,b,sum=0;
	printf("enter a,b values");
	scanf("%d %d",&a,&b);
	sum=add(a,b);
	printf("sum is %d",sum);
}
int add(int x,int y)
{
	int res;
	res=x+y;
	return res;
}
