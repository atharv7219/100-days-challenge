//Q90: Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i,length,c,a;
    char ch;

    printf("Enter any String: \n");
    scanf("%s",str);
    length=strlen(str);

    for(i=0;i<length;i++)
    {     
        c=0;
        for(ch='a';ch<='z';ch++)
        {
            if((int)ch==(int)str[i])
            {
                c=1;
            }
        }
        if(c==1)
        {
            a=(int)str[i]-32;
            str[i]=(char)a;
        }
        else{
            a=(int)str[i]+32;
            str[i]=(char)a; 
        }
    }
    printf("String after toggling case of each character is: %s \n",str);

}
