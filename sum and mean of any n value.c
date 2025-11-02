#include<stdio.h>
int main()
{
int i,n,a=0,mean;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
a=a+i;
}
printf("sum of first %d number is:%d\n",n,a);
mean=a/n;
printf("mean of first %d number is:%d",n,mean);

return 0;
}