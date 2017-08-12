#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
{
printf("it is an alphabet");
}
else
{
printf("it is not an alphabet");
}
return 0;
}
