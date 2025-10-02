#include<stdio.h>
int main()
{
int i,n,sum=0,mean;
for(i=0;i<=10;++i)
{
sum=sum+i;
}
mean=sum/10;
printf("sum of first 10 natural number is %d\n",sum);
printf("mean of first 10 natural number is %d",mean);
return 0;
}