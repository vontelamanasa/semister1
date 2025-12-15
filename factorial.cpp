#include<stdio.h>
int main()
{
	int i,n;
    unsigned long long fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
	{
    fact*=i;
    } 
    
    	printf("factorial of %d=%llu\n",fact,n);
	
	return 0;
}
