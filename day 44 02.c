//Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
#include<string.h>

int main()
{
    char str[50];

    printf("Enter any String \n");
    fgets(str,sizeof(str),stdin);

    int i,length;
    length=strlen(str);

    for(i=0;i<length;i++)
    {
        int a=(int) str[i];
        if(a==32)
        {
            str[i]='-';
        }
    }
    printf("String after replacing spaces with hyphens is: %s \n",str);
    return 0;
    
}
