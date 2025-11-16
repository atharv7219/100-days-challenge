//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".


#include <stdio.h>
#include <string.h>

int main()
{
    char s[1005], t[1005];
    scanf("%s %s", s, t);
    int cs[26] = {0}, ct[26] = {0};
    for(int i=0;s[i];i++) cs[s[i]-'a']++;
    for(int i=0;t[i];i++) ct[t[i]-'a']++;
    int ok = 1;
    for(int i=0;i<26;i++) if(cs[i]!=ct[i]) { ok = 0; break; }
    if(ok) printf("Anagram\n"); else printf("Not Anagram\n");
    return 0;
}
