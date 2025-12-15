#include<stdio.h>
int main()
{
	int n,i,flag=1;
	printf("enter n value");
	scanf("%d",&n);
	if(n<=1)
	flag=0;
	else{
		for(i=2;i<=n;i++)
		{
			if(n % i==0) 
			{
			flag=0;
			break;
		  }
		}
	}
	if (flag)
	printf("It is a prime number");
	else 
     printf("It is not a prime number");
	return 0;
}
