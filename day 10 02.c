//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
#include <math.h>
int main(){
    int day;
    printf("Enter the number between 1-7 \n");

    printf("press 1 to display monday \n");
    printf("press 2 to display tuesday \n");
    printf("press 3 to display wednesday \n");
    printf("press 4 to display thursday \n");
    printf("press 5 to display friday \n");
    printf("press 6 to display saturday \n");
    printf("press 7 to display sunday \n");
    printf("Enter your choice \n");
    scanf("%d",&day);
    

    switch(day)
    {
        case 1 : printf("Monday \n");
                break;
        case 2 : printf("Tuesday \n");
                break;
        case 3 : printf("Wednesday \n");
                break;
        case 4 :  printf("Thursday \n");
                break;
        case 5 : printf("Friday \n");
                break;
        case 6 : printf("Saturday \n");
                break;
        case 7 :printf("Sunday \n");
                break;
        default :printf("Wrong Choice");
    }
return 0;
}
