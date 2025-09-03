//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 #include<stdio.h>
int main()
{
    char a;
    int i,b=0,c=0,d=0,j,k;
    printf("Enter any Character");
    scanf("%c",&a);
    for(i=65;i<=90;i++)
    {
        if((int)a==i)
        {
            printf("Character is Uppercase Alphabet");
            d=1;
            break;
        }
    
    }
    for(j=97;j<=122;j++)
    {
        if((int)a==j)
        {
            printf("Character is Lowercase Alphabet");
            c=1;
            break;
        }
    }
    for(k=0;k<=9;k++)
    {
        int e=a;
        if(e==k)
        {
            printf("Character is a digit");
            b=1;
            break;
        }
    }
    if(b==0 && c==0 && d==0)
    {
        printf("Character is a special character");
    }

}
