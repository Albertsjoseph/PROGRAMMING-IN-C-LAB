#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,reverse=0,org;
clrscr();
printf("enter a number");
scanf("%d",&n);
org=n;
while(n>0)
{
r=n%10;
reverse=reverse*10+r;
n/=10;
}
printf("original number is %d\n",org);
printf("reversed=%d",reverse);
getch();
}