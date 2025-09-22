//Q59: Count even and odd numbers in an array.

#include <stdio.h>
int main()
{
    int i,a[10],c=0,d=0,j;

printf("Enter array elements");

for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}

for(j=0;j<10;j++)
{
    if(a[j]%2==0){
    ++c;}
    else
    {
        ++d;
    }
}
printf("The count of odd elements is: %d",d);
printf("The count of even elements is: %d",c);
}
