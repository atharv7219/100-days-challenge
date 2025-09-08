//Q31: Write a program to take a number as input and print its equivalent binary representation.
 #include <stdio.h>
  int main()
  {
    int n,bineq=0,a=1,r;
    printf("Enter any number \n");
    scanf("%d",&n);

    if(n==0)
    {
        printf("Binary equivalent of the number is 0");
    }
    else{


     while(n>0)
    {
    r=n%2;
    bineq=r*a+bineq;
    a=a*10;
    n=n/2;
    
    }
    printf("Binary equivalent of the number is: %d",bineq);
}

  }
