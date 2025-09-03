//Q21: Write a program to display the month name and number of days using switch-case for a given month number.
 #include <stdio.h>
 #include <math.h>
 int main()
 {
   int ch;
   printf("Enter any number between 1-12 \n");
   printf("press 1 to display name and  number of days of january\n");
   printf("press 2 to display name and  number of days of february\n");
   printf("press 3 to display name and  number of days of march\n");
   printf("press 4 to display name and  number of days of april\n");
   printf("press 5 to display name and  number of days of may\n");
   printf("press 6 to display name and  number of days of june\n");
   printf("press 7 to display name and  number of days of july\n");
   printf("press 8 to display name and  number of days of august\n");
   printf("press 9 to display name and  number of days of september\n");
   printf("press 10 to display name and  number of days of october\n");
   printf("press 11 to display name and  number of days of november\n");
   printf("press 12 to display name and  number of days of december\n");

   printf("Enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1: printf("January,Number of days 31\n");
    break;
    case 2: printf("February,Number of days 28\n");
    break;
    
    case 3: printf("March,Number of days 31\n");
    break;
    
    case 4: printf("April,Number of days 30\n");
    break;
    
    case 5: printf("May,Number of days 31\n");
    break;
    
    case 6: printf("June,Number of days 30\n");
    break;
    
    case 7: printf("July,Number of days 31\n");
    break;
    
    case 8: printf("August,Number of days 31\n");
    break;
    
    case 9: printf("September,Number of days 30\n");
    break;
    
    case 10: printf("October,Number of days 31\n");
    break;
    
    case 11: printf("November,Number of days 30\n");
    break;
    
    case 12: printf("December,Number of days 31\n");
    break;

    default:printf("Wrong choice\n");
   }
 }
