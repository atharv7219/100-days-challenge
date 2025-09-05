//Q30: Write a program to reverse a given number.

#Include <stdio.h>

int main()
{
    int r,rev,n;
    
    printf("Enter any number");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reverse of the number is: %d \n",rev);
}
