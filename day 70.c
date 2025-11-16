//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[1005];
    fgets(s, sizeof(s), stdin);
   
    int ln = strlen(s);
    if(ln>0 && s[ln-1]=='\n') s[ln-1]=0;

    int start = 0;
    while(s[start] && isspace((unsigned char)s[start])) start++;

    for(int i=0;i<strlen(s);i++) s[i] = tolower((unsigned char)s[i]);
    if(s[start]) s[start] = toupper((unsigned char)s[start]);

    printf("%s\n", s);
    return 0;
}
