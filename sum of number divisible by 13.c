#include<stdio.h>
int main()
{
int i,n,a=0;
for(i=0;i<100;++i)
{
if(i%13==0)
{
a=a+i;}
}
printf("%d is sum of number which divisible by 13",a);
return 0;
}