#include<stdio.h>
int main(){
    int num,rev=0;
    printf("enter a number to be reversed:");
    scanf("%d", &num);
    // while(condition)
    printf("entered number: %d\n", num);
    while(num>0){
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("reversed number: %d", rev);
}