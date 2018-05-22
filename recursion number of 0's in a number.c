#include<stdio.h>
int zero(int);
void main()
{
int x,y;
scanf("%d",&x);
y= zero(x);
printf("%d",y);
}
int zero(int x)
{

if (x==0)

return 1;

else if(x<10&&x>-10)

return 0;

else

return (zero(x%10)+ zero(x/10));

}
