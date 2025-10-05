//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int  main()
{
    int n,temp1,temp2,r1,r2,dig,c=0,d=0;
    printf("Enter any number");
    scanf("%d",&n);

    temp1=n;
    temp2=n;
    while(temp1>0)
    {
        r1=temp1%10;
        while(temp2>0)
        {
            r2=temp2%10;
            if(r2==r1){
                c++;
            }
            temp2/=10;
        }
        if(c>d)
        {
            d=c;
            dig=r1;
        }
        temp2=n;
        temp1/=10;
    }
    printf("The digit that occurs the most is:%d \n",dig);
}
