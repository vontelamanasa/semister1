#include<stdio.h>
int main()
{
	int kilometers,meters;
	printf("enter the distance in kilometers");
	scanf("%d",&kilometers);
	meters=kilometers*1000;
	printf("the distance in kilometers is%d",meters);
	return 0;
}
