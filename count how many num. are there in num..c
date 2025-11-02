#include<stdio.h>
int main()
{
int i,n,a=1;
printf("enter number:");
scanf("%d",&n);
for(i=0;i<=n;++i)
{
a=a+1;
n=n/10;
}
printf("%d, ",a);
return 0;
}