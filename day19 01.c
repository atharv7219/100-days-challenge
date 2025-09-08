//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
#include <math.h>
 int main()
 {
    int a,b,lcm;

    printf("Enter first number \n");
    scanf("%d",&a);
    printf("Enter second number \n");
    scanf("%d",&b);

    lcm=(a>b)? a:b;

    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            break;
        }
        lcm++;
    }
    printf("LCM of the two numbers is: %d",lcm);
    return 0;

    
 }
