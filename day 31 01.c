//Q61: Search for an element in an array using linear search.


#include <stdio.h>
int main()
{
    int n,i,c=0;
    int a[5];
    printf("Enter element to be searched\n");
    scanf("%d",&n);

    printf("Enter array elements \n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(n==a[i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("Element is Found\n");
    }
    else{
        printf("Element is not Found\n");
    }
    return 0;
}
