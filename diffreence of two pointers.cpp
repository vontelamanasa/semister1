#include<stdio.h>
int main()
{
	int a=10;
	int b=5;
	int *p1=&a;
	int *p=&b;
	int difference=*p1-*p;
	printf("%d",difference);
	return 0;
}
