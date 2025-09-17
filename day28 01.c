//Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main()
{
    int i,j,n,c;

    printf("Enter any Number");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d \t",i);
        }
        
    }
}
