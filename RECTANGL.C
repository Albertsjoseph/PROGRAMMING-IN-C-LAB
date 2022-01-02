#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("*\t");
}
printf("\n");
}
getch();
}