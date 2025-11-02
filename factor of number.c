#include <stdio.h>
int main()
{
int i,n,a;
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<=n/2;++i)
{
if(n%i==0)
{
printf("%d,",i);
}}
printf("%d",n);

return 0;
}