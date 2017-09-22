#include<stdio.h>
int main()
{

    int i,j,a;
    printf("enter a number");
    scanf("%d",&a);a=(a*2)-1;
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i+j)>=(a-1))
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }printf("\n");
}

 return 0;
 }
