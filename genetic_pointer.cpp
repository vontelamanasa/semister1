#include<stdio.h>
int main()
{
   int a=10;
   float b=4.5;
   void *p;
   p=&a;
   printf("value :%d\n",*(int*)p);
   p=&b;
   printf("value :%f",*(float*)p);
   return 0;
}

