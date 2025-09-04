// Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    int cp, sp, profit = 0, loss = 0;
    float prpercent = 0, losspercent = 0;

    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        prpercent = ((float)profit / cp) * 100;   // typecast to float
        printf("Profit percentage is: %.2f%%", prpercent);
    }
    else if (sp < cp)   // fixed condition
    {
        loss = cp - sp;
        losspercent = ((float)loss / cp) * 100;   // typecast to float
        printf("Loss percentage is: %.2f%%", losspercent);
    }
    else
    {
        printf("No Profit, No Loss");
    }

    return 0;
}
