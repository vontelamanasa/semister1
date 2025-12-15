#include<stdio.h>
int main()
{
	int a;
    printf("enter a number");
    scanf("%d",&a);
    float b;
    printf("enter a number");
    scanf("%f",&b);
    char c;
    printf("enter a character");
    scanf("%c",&c);
    char name[30];
    printf("enter your name");
    scanf("%s");
    printf("%d\n",&a);
    printf("%f\n",&b);
    printf("%c\n",&c);
    printf("%s",&name);
    return 0;
}
