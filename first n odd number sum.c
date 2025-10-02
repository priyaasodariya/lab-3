#include<stdio.h>
int main()
{
int i,n,a,sum=0;
printf("enter a number ,you  want to print:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
a=2*i;
sum=sum+a;
}
printf("sum of %d odd number is %d",n,sum);
return 0;
}