#include<stdio.h>
int main()
{
	int num;
	printf("enter num value");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("num is even",num);
	}
	else
	{
		printf("num is odd",num);
	}
	return 0;
}
