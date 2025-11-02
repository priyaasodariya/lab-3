#include<stdio.h>
int main()
{
int i,n,a;
printf("enter number:");
scanf("%d",&n);
for(i=0;i<=n/10;++i)
{
a=n%10;
n=n/10;
printf("%d",a);
}
printf("%d",n);
return 0;
}