#include<stdio.h>
int a=5; //global variable
void add()
{
	int a=7,b=9;
	printf("%d",a+b);
}
int main()
{
	add();
}
