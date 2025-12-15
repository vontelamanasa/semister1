#include<stdio.h>
int main ()
{
	int a;
	int b;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	if(a>b)
	{
	printf("%d is greatest one",a);
    }
    else if(a<b)
    {
	printf("%d is smaller one",a);
	}
    else
    {
    	printf("%d is not greatest one");
	}
	return 0;

	

}
