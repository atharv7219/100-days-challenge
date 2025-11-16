//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>
#include <string.h>

int main()
{
    char s[1005];
    scanf("%s", s);
    int last[256];
    for(int i=0;i<256;i++) last[i] = -1;

    int start = 0, best = 0;
    int len = strlen(s);
    for(int i=0;i<len;i++){
        unsigned char c = s[i];
        if(last[c] >= start) start = last[c] + 1;
        int curLen = i - start + 1;
        if(curLen > best) best = curLen;
        last[c] = i;
    }
    printf("%d\n", best);
    return 0;
}
