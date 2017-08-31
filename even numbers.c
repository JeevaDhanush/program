#include<stdio.h>
int main()
{
int i,j,a,b;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
}
return 0;
}
