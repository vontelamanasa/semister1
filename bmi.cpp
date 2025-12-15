#include<stdio.h>
int main()
{
	int weight;
	printf("enter weight value");
	scanf("%d",&weight);
	int height;
	printf("enter height value");
	scanf("%d",&height);
	 int bmi;
	 bmi=weight/height;
	printf("enter the bmi value is%d",bmi);
	return 0;
}
