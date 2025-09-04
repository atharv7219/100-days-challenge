//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

#include <stdio.h>
int main()
{
    int latedays,fine=0;

    printf("Enter the number of late days");
    scanf("%d",&latedays);
    if(latedays>=1 && latedays<=5)
    {
        fine=2*latedays;
        printf("fine is:%d \n",fine);
    }
    else if(latedays>5 && latedays<=10)
    {
        fine=10+(4*(latedays-5));
        printf("fine is:%d \n",fine);
    }
    else if(latedays>10 && latedays<=20)
    {
        fine=10+20+((latedays-10)*6);
        printf("fine is: %d \n",fine);
    }
    else if(latedays>20)
    {
        printf("Membership Cancelled \n");
    }
    else{
        printf("Thanks for returning the book \n");
    }
}
