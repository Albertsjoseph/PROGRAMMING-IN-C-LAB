#include<stdio.h>
#include<conio.h>
void main()  
{  
   int i,n,j,c=1,m;
   clrscr();
   printf("enter  a number");
   scanf("%d",&n);
   
   m=c;
   for(i=n;i>=1;i--)
   {
       
       for(j=1;j<=i;j++)
       {
           
       
         printf("%d\t",m);
            m++;
           
       }
       
       
       printf("\n");
       c=c+1;
       m=c;
       
   }
getch();
}  
