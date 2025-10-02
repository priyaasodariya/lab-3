#include<stdio.h>
int main()
{
int i,j,a;
for(i=1;i<=2;++i)
{
for(j=1;j<=2;++j)
{
for(a=1;a<=2;++a){
printf("%d%d%d\n",i,j,a);
}
}
}
return 0;
}