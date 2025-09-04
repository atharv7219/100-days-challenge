//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>
int main()
{
    int electricity_bill,units;
    if(units>=1 && units <=100)
    {
        electricity_bill=5*units;
        printf("Electricity bill is %d \n",electricity_bill);
    }
    
    else if (units >100 && units <=200 )
    {
        electricity_bill=500+((units-100)*7);
        printf("Electricity bill is %d \n",electricity_bill);
    }
    else if (units>200 && units<=300)
    {
        electricity_bill=500+700+((units-200)*10);
        printf("Electricity bill is %d \n",electricity_bill);
    }
    else if(units>300)
    {
        electricity_bill=500+700+1000+((units-300)*12);
        printf("Electricity bill is %d \n",electricity_bill);
    }
    else{
        printf("Electricity bill is 0");
    }

    
}
