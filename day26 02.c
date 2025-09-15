//Q52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*

#include <stdio.h>

int main()
{
int i,j,k,l;

for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("* \n");
    }
    printf("\n");
    printf("\n");
}

for(k=3;k>=1;k--)
{
    for(l=1;l<=k;l++)
    {
        printf("* \n");
    }
    printf("\n");
    printf("\n");
}
}
