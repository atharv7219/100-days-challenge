//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include <math.h>
int main()
{
    int pamt,time;
    float rate,si=0,ci=0;
    printf("Enter principal amount \n");
    scanf("%d",&pamt);
    printf("Enter time in years\n");
    scanf("%d",&time);
    printf("Enter rate of interest\n");
    scanf("%f",&rate);
    si=(pamt*rate*time)/100;
    ci=pamt*pow((1+(rate/100)),time);
    printf("Simple Interest is: %f /n",si);
    printf("Compound Interest is : %f \n",ci);
}
