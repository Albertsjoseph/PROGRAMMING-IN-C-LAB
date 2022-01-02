#include <stdio.h>

int main() 
{
    int n,reveresed=0,reminder,org;
    
    
    printf("enter a integer number");
    scanf("%d",&n);
     org=n;
    
    while(n>0){
        reminder=n%10;
        reveresed = reveresed+reminder*reminder*reminder;
        n/=10;
    }
    
    if(org==reveresed){
        printf("%d is a amstrong number",org);
    }else{
        printf("%d is a  not a amstrong number",org);
    }

}
