#include<stdio.h>
int fib(int),y;
void main()
{
int i,j,n;
scanf("%d",&n);
for (i=1;i<=n;i++)
printf("%d",fib(i));
}
int fib(int x){
if (x==1||x==2)
return (1);

return (fib(x-1) + fib(x-2));
}
