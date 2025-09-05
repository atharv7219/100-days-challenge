//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int r,rev=0,n,copy;
    
    
    printf("Enter any number");
    scanf("%d",&n);
    copy=n;

    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==copy)
    {
    printf("Palindrome Number");}
    else {
    printf("Not a Palindrome Number");}
}
