#include<stdio.h>
#include<conio.h>
void main()  
{  
   int i,n,j,c=1;
   clrscr();
   printf("enter a number");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       
       for(j=1;j<=i;j++)
       {
         printf("%d\t",c);
           
           
       }
       
       printf("\n");
       c++;  
   }
   getch();
}
