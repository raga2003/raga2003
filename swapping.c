#include<stdio.h>

int main()
{

int a=5;
int b=6;

printf("a : %d , b : %d\n",a,b);

a=a+b;
b=a-b;
b=a-b;

printf("a : %d , b : %d\n",a,b);
}
