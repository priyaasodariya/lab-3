#include<stdio.h>
int main()
{
int i,j=0,n,a=0,b=1;
printf("enter a number fibonaci series print:");
scanf("%d",&n);
if(n==1)
printf("%d",a);
if (n>=2)
printf("%d , %d,",a,b);
for(i=0;i<=n-3;++i)
{
j=a+b;
printf("%d ,",j);
a=b;
b=j;
}return 0;
}
    