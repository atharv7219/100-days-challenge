//Q89: Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
     int i,length,c=0;

    printf("Enter any string \n");
    fgets(str,sizeof(str),stdin);
    
    length=strlen(str);

    if(str[length-1]== '\n')
    {
        str[length-1]= '\0';
    }

   
    char ch;
    printf("Enter character whoose frequency is to be count \n");
    scanf("%c",&ch);

    

    for(i=0;i<length;i++)
    {
        
     if((int)ch==(int)str[i])
    {
        ++c;
    }
    }
    printf("Frequency of the character is: %d \n",c);
}
