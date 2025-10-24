//Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
#include <string.h>
int main()
{
    char str [50];
    
    int i;

    printf("Enter any String :\n");
    scanf("%s",str);

    int length;
    length=strlen(str);

    for(i=0;i<length;i++)
    {
  int a= (int)str[i];
  a=a-32;
  str[i]=(char)a;
    }
    printf("String from lowercase to uppercase is:%s \n",str);
    return 0;
}
