//Q82: Print each character of a string on a new line.

#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];

    printf("Enter any string \n");
    scanf("%s",&a);
    int i,length;
    length=strlen(a);

    for(i=0;i<length;i++)
    {
        printf("%c \n",a[i]);

    }

    return 0;

}
