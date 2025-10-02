#include<stdio.h>
int main()
{
int i,n,a,sum=0;
printf("enter a number ,you  want to print:");
scanf("%d",&n);
for(i=0;i<n;++i)
{
a=i+1;
sum=sum+a;

}
printf("sum of %d natural number is %d",n,sum);
return 0;
}