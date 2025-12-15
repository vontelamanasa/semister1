#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
    big = (a>b)?((a>c)?a:c);
    {
	printf("the biggest number is %d\n");
}
    return 0;
}
