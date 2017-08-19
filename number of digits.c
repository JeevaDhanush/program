#include<stdio.h>
int main()
{
int a,b,count=0;
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++count;
}
printf("%d",count);
}
