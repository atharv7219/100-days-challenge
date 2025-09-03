//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,discriminant, root1, root2;

    printf("Enter the value of a:");
    scanf("%d" , &a);    

    printf("Enter the value of b:");
    scanf("%d" , &b);

    printf("Enter the value of c:");
    scanf("%d" , &c);

     discriminant = b*b - 4*a*c;
     root1 = (-b + sqrt(discriminant)) / 2*a;
     root2 = (-b - sqrt(discriminant)) / 2*a;

     if (discriminant>0)
     {
        printf("Roots are real and different: %d, %d \n" , root1, root2);
     }

     else if (discriminant==0)
     {
        printf("Roots are real and same: %d \n" , root1);
     }

     else
     {
        printf("Roots are imaginary. \n");
     }
   
    return 0;
}
