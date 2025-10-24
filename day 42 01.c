//Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];

    printf("Enter any string \n");
    scanf("%s",a);
    int i,length,c=0,d=0;
    length=strlen(a);

    for(i=0;i<length;i++)
    {
    char ch= a[i];

    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        c++;
    }
    else
    {
        d++;
    }

    }

    printf("No of Vowels: %d \n",c);
    printf("No of Consonants: %d \n",d);

    return 0;

}
