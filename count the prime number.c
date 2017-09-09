#include<stdio.h>
int main()
{
int i,j,a,b,count=0;;
scanf("%d%d",&a,&b);
for(i=3;i<=a/2;i++)
{
if(a%i==0)
{
j=1;
break;
}
}
if(j==0)
{
count++;
++a;
}
printf("%d",count);
return 0;
}
