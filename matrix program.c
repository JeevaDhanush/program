#include<stdio.h>
int main() 
{
    int i,j,a,m;
    printf("enter a number\n");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=0;j<i;j++)
        {
           printf("*");
        }
       printf("\t");
       for(j=0;j<i;j++)
       {
           printf("*");
       }
        printf("\n");
    }
    
   return 0;
}
