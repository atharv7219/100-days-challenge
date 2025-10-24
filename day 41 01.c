//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];

    printf("Enter any string");
    scanf("%s",&a);
    int i,c=0,length;
    length=strlen(a);

    for(i=0;i<length;i++)
    {
        c++;
    }
    printf("total number of characters  in the string is: %d \n",c);
    return 0;

}
