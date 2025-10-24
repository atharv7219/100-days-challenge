//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];

    printf("Enter any String\n");
    fgets(str,sizeof(str),stdin);
    
    int i,length,c=0,d=0,e=0;
    length=strlen(str);

    for(i=0;i<length;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
        else if (isdigit(str[i]))
        {
           d++; 
        }
        else if (ispunct(str[i]))
        {
            e++;
        }
        
        
    }
    printf("no of spaces :%d \n",c);
    printf("no of digits: %d \n",d);
    printf("no of special characters: %d \n",e);
    return 0;
}
