#include<stdio.h>
int main()
{
int a,b;
printf("Enter The number a and b respectively\n");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The numbers afters swapping is a=%d b=%d",a,b);
return 0;
}
