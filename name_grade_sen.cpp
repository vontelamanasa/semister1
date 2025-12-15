#include<stdio.h>
int main()
{
	char grade;
	char name;
	char sen;
	printf("enter grade\n");
	scanf("%c",&grade);
	printf("enter name\n");
	scanf("%c",&name);
	getchar();
	printf("enter sentence");
	scanf("%[^/n]",&sen);
	printf("%c\n%s\n%s",grade,name,sen);
	return 0;
	}
