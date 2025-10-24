//Q85: Reverse a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char reverse[50];
    int i,length;
    printf("Enter any string: \n");
    scanf("%s",str);

    length=strlen(str);

    reverse[length]='\0';

    for(i=0;i<length;i++)
    {
 reverse[i]=str[length-i-1];
    }

    printf("Reverse of the string is: %s \n",reverse);
    return 0;
}
