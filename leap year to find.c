#include<stdio.h>
int main()
{
int i,j,a;
scanf("%d",&a);
if(a%4==0)
{
for(i=1;i<=20;i++)
{
a=a+4;
printf("%d",a);
}
}
return 0;
}
