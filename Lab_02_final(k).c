#include<stdio.h>

#include<string.h>

int main()
{
    int n,i,j,k,result[20],num[20],m=0,sum=0,mul=1,div=0,mod,p=0;
    char c,d;
    printf("Enter the pair value of n : ");
    scanf("%d",&n);

 printf("Enter the %d number for %d pair: ",2*n,n);
    for (i=0;i<2*n;i++)
    {
        scanf("%d",&num[i]);
    }

    for ( k= 0; k<2*n; k++)
    {
        printf("%d  ",num[k]);
    }
    d=getchar();
    c=getchar();

   switch(c)
    {
    case '+':
         p=0;
        for (i=0;i<2*n;i=i+2)
    {
        result[p]=num[i]+num[i+1];
        p=p+1;
        }
    j=0;
    printf("\n");
    for ( k= 0; k<n; k++)
    {

        printf("Sum of %d pair: %d \n",k+1,result[k]);
        j=j+2;
    }
    break;

    case '-':
         p=0;
        for (i=0;i<2*n;i=i+2)
    {
        result[p]=num[i]-num[i+1];
        p=p+1;

    }

    printf("\n");
    for ( k= 0; k<n; k++)
    {
        printf("Subtraction of %d pair: %d \n",k+1,result[k]);
    }
    break;
    case '*':
         p=0;
        for (i=0;i<2*n;i=i+2)
    {
        result[p]=num[i]*num[i+1];
        p=p+1;

    }
    printf("\n");
    for ( k= 0; k<n; k++)
    {
    printf("Multiplication of %d pair: %d \n",k+1,result[k]);

    }
    break;

    case '/':
         p=0;
        for (i=0;i<2*n;i=i+2)
    {
        result[p]=num[i]/num[i+1];
        p=p+1;

    }
    printf("\n");
    for ( k= 0; k<n; k++)
    {
    printf("Division of %d pair: %d \n",k+1,result[k]);

    }
    break;

    }
    return 0;
}

