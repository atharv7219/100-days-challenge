//Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char reverse[50];
    int i,length,c=1;
    printf("Enter any string: \n");
    scanf("%s",str);

    length=strlen(str);

    reverse[length]='\0';

    for(i=0;i<length;i++)
    {
 reverse[i]=str[length-i-1];
    }

   c=strcmp(reverse,str);
   if(c==0)
   {
    printf("Palindrome string");

   }
   else{
    printf("Not a palindrome string");
   }

    return 0;
}
