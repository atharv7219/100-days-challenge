//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float tempC,tempF;
    printf("Enter temperature in celsius  which is to be converted in fahrenheit\n");
    scanf("%f",&tempC);
    tempF=(tempC*1.8)+32;
    printf("Temperature in fahrenheit is:%f",tempF);
    return 0;
}
