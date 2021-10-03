#include<stdio.h>


int main()
{
    int i,f=1,num;
    printf("Enter a number to calculate factorial using for loop: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
        f=f*i;
    printf("Factorial of %d is: %d",num,f);

    printf("\n Enter a number to calculate factorial using while loop: ");

    scanf("%d",&num);
      while(i<=num)
    {
        f=f*i;
        i++;
    }

    printf("\n The Factorial of %d is %d:",num,f);
}

