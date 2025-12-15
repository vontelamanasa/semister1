//write a c program for bitwise operators
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("a&b gives %d\n",a&b); //both bits are true
	printf("a|b gives %d\n",a|b); //any one is true
	printf("a^b gives %d\n",a^b); //any one is different
	printf("a>>b gives %d\n",a>>b); //right shift
	printf("a<<b gives %d\n",a<<b); //left shift
	return 0;
}
