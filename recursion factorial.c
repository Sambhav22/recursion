#include<stdio.h>
int fact(int);
void main()
{
int num,result;
scanf("%d",&num);
result= fact(num);
printf("%d",result);
}
int fact(int num)
{

if(num==0||num==1)
   {

    return 1;
    }
else
{return (num * fact(num-1));

}}
