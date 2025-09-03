//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
 {
    int a,b,c;
    printf("Enter lengths of the triangle\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b && b==c)
    {
        printf("Equilateral Triangle");
    }
    else if((a==b && b!=c) || (a==c && c!=b) || (b==c && c!=a))
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
    return 0;
 }
