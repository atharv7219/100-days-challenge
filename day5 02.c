//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
 int time,hours,t1,t2,mins,sec;
 printf("Enter time in seconds\n");
 scanf("%d",&time);
 hours=time/3600;
 t1=time%3600;
 mins=t1/60;
 sec=t1%60;
 printf ("%d",hours);
 printf("hours\n");
 printf("%d",mins);
 printf("minutes\n");
 printf("%d",sec);
printf("seconds");
}
