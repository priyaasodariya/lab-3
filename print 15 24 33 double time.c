#include<stdio.h>
int main()
{
int i,j,a;
for(i=1;i<=3;++i)
{
for(j=6-i;j>5-i;j--)
{
printf("%d%d\n",i,j);
printf("%d%d\n",i,j);
}
}
return 0;
}