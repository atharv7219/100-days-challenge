//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&l);
    printf("Enter the bredth of the rectangle\n");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The area of the rectangle is:%d \n",area);
    printf("The perimeter of the rectangle is: %d \n",perimeter);
}
