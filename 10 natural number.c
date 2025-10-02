#include<stdio.h>
int main()
{
int i,n,a;
printf("enter a number ,you  want to print:");
scanf("%d",&n);
for(i=0;i<n;++i)
{
a=1+i;
printf("%d",a);
}
return 0;
}