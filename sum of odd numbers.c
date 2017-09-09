#include<stdio.h>
int main()
{
int i,j=0,a;
scanf("%d", &a);
for(i=1;i<=a;i++)
{
if(i%2!=0)
{
j=j+i;
}
}
printf("%d",j);
return 0;
}
