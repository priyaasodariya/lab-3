#include<stdio.h>
int main()
{
int i,n,a=0;

for(i=1;i<=100;++i)
{
if(i%3==0)
{
a=a+i;
}
}
printf("sum of number which divisable by 3 is:%d",a);
return 0;
}