#include<stdio.h>
int main()
{
int n,i=1,fact=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 fact=fact*i;   
}
printf("%d",fact);
if(n<0)
{
    printf("Not possible");
}
    return 0;
}
