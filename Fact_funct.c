// A C program to find factorial of a number using functions
#include<stdio.h>
int fact(int a)
{
    int i;
    long long int fact = 1;
    if (a == 0)
    {
        return 1;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
       for(i=1;i<=a;i++)
       {
          fact = fact*i;
       }
    }
    return fact;
}

int main()
{
    int a,i;
    printf("Enter value of a : ");
    scanf("%d",&a);
    fact(a);
    printf("Factorail of %d is %d",a,fact(a));
    return 0;
}