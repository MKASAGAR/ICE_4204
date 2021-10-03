
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

void numberGenerate(char lastDigit, int *num)
{
    *num = *num*10 + (int)lastDigit-48;

}

float calculate(int a, int b, char s)
{
    switch(s)
    {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
        return a/b;
    case '%':
        return a%b;
    }

}
int main()
{
    char *data;
    int n1=0, n2=0, flag=0;
    char d, sign;
    for(d = getch(); d != '='; d = getch())
    {
       printf("%c", d);
       if (d == '+' || d == '-'|| d == '*' || d == '/' || d == '%')
       {
           flag = 1;
           sign = d;
           continue;
       }
       if(flag == 0)
       {
           numberGenerate(d, &n1);
       }
       else
       {
           numberGenerate(d, &n2);
       }
    }
    printf("\n%d %c %d = %.2f", n1, sign, n2, calculate(n1,n2, sign));
    return 0;
}
