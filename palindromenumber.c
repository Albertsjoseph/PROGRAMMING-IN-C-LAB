#include <stdio.h>

int main() {

    int n,reveresed=0,reminder,org;


    printf("enter a integer number");
    scanf("%d",&n);
     org=n;

    while(n>0){
        reminder=n%10;
        reveresed = reveresed*10+reminder;
        n/=10;
    }

    if(org==reveresed){
        printf("%d is a palindrome number",org);
    }else{
        printf("%d is a  not a palindrome number",org);
    }

}
