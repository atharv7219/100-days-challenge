//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main()
{
    int ch,a,b,sum=0,diff=0,quotient=0,rem=0,product=0;
    printf("Enter two numbers for basic calculation");
    scanf("%d",&a);
        scanf("%d",&b);
    printf("Press 1 for addition");
    printf("press 2 for subtraction");
    printf("press 3 for multiplication");
    printf("press 4 for quotient");
    printf("press 5 for remainder");
    printf("Enter your choice");
    switch(ch)
    {
        case 1: 
       
        sum=a+b;
        printf("Sum is : %d \n",sum);
        break;
        case 2:
        diff=a-b;
        printf("difeerence is : %d \n",diff);
        break;
        case 3:
        product=a*b;
        printf("Product is: %d \n",product);
        break;
        case 4:
        if(b==0)
        {
            printf("denominator cannot be zero\n");
            break;
        }
        else{

     quotient=a/b;
     printf("quotient is: %d \n",quotient);
     break;
    }
    case 5:
    rem=a%b;
    printf("remainder is: %d \n",rem);
    break;
    default :printf("Wrong Choice");
}
}
