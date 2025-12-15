#include<stdio.h>
int main()
{
	int a=3;
	printf("the  a value is %d");
	scanf("%d",&a);
	float b=5.6;
	printf("the value is %f");
	scanf("%f",&b);
	char c;
	printf("the value is%c");
	scanf("%c",&c);
	double p;
	printf("the value is %lf");
	scanf("%lf",&p);
	printf("the a,b,c,p values are %d",&a,&b,&c,&p);
	return 0;
}
