#include<stdio.h>
#include<string.h>
int main()
{
char a[1000],b;
int i,j,count=0,m;
printf("enter a string");
gets(a);
printf("enter the character");
scanf("%c",&b);
m=strlen(a);
if(m%2!=0)
{
printf("not valid");
}
else
{
for(i=0;a[i]!='\0';i++)
{
if(b==a[i])
++count;
}
j=count+count;
if(j==m)
{
printf("valid");
}
else
{
printf("not valid");
}
}
return 0;
}
