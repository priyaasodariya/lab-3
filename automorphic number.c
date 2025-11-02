#include<stdio.h>
int main()
{
int i,n,x,a;
printf("enter a number :");
scanf("%d",&n);
x=n*n;
a=x%10;
if(a==n){
printf("number is automorphic");}
else{
printf("number is not automorphic");}
return 0;
}