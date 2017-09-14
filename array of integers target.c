#include<stdio.h>
int main()
{
int i,j,a,n,l;
int arr[1000]={2,7,11,15};
scanf("%d",&a);
for(i=0;i<=3;i++)
{
for(j=1;j<=3;j++)
{
if(arr[i]+arr[j]==a)
{
printf("%d %d",arr[i],arr[j]);
}
}
}
return 0;
}
