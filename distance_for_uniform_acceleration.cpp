//write a c program to find distance travelled under uniform acceleration
#include<stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("enter acceleration,intial velocity,time");
	scanf("%d%d%d",a,u,t);
	d=(u*t)+(0*t*t)/2;
	printf("The distance = %.2f",d);
	return 0;
}
