#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=0;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
if(n%i!=0)
{
c=c+1;
}
}
if(c==n-2)
{
printf("%d is a prime number",n);
}
else if(c!=n-2||c==0)
{
printf("%d is not a prime number",n);
}
getch();
}