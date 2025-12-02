#include<stdio.h>
void greet()
{printf("hello!\n");}
int main()
{
	void(*funcPtr)()=greet;
	funcPtr();
	return 0;
}
