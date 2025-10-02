#include<stdio.h>
int main()
{
int i,n,a;
printf("enter a number ,you  want to print:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
a=2*i;
printf("%d\n",a);
}
return 0;
}