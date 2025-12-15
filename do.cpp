#include<stdio.h>
int main()
{
	int i=10;
	printf("enter while loop:%d\n");
	while(i<5){
		printf("i=%d",i);
	}
	printf("enter do while loop:%d\n");
	do{
		printf("i=%d",i);
		while(i<5);
	}
	return 0;
	}
