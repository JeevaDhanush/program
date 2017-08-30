#include<stdio.h>
int main()
{
int i,j,k,a;
scanf("%d",&a);
for(i=2;i<a/2;i++)
{
if(a%i==0)
{
k=1;
break;
}
}
if(flag==0)
{
printf(" it is prime number");
}
return 0;
}
