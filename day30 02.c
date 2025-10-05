//Q60: Count positive, negative, and zero elements in an array.


#include <stdio.h>
int main()
{
    int i,a[10],c=0,d=0,j,e=0;

printf("Enter array elements");

for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}

for(j=0;j<10;j++)
{
    if(a[j]>0){
    ++c;}
    else if(a[j]<0)
    {
    ++d;
    }
    else if(a[j]==0)
    {
        ++e;
    }
}
printf("The count of negative elements is: %d",d);
printf("The count of positive elements is: %d",c);
printf("The count of zero elements is: %d",e);

}
