#include <stdio.h>
int main()
{
    int m[1000] = {1,2,1,2,3,2,3,4,5,6};
    int n,c,i,a;
    n = sizeof(m);
    c=n/sizeof(int);
    scanf("%d",&a);
   for(i=0;i<=c;i++)
   {
   if(a==m[i])
   {
   printf("number is present");
   }
   }
    return 0;
}
