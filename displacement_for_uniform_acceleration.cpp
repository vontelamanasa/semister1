//write a c program to find displacement  travelled under uniform acceleration
#include<stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("enter acceleration value");
	scanf("%f",&a);
	printf("enter intial velocity value ");
	scanf("%f",&u);
	printf("enter time value");
	scanf("%d",&t);
	d=(u*t)+(a*t*t)/2;
	printf("The displacement = %.2f",d);
	return 0;
}
