#include<stdio.h>
#include<stdlib.h>
int main()
{
int p,per=0,c;
scanf("%d %d",&c,&p);
p=100-p;
while(c>0)
{
per+=c;
c=(p*c)/100;
}
printf("%d",per);
return 0;
}
