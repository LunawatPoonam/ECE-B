// A C program to find fibonacci series using functions
#include<stdio.h>
int fibonacci(int x, int y, int a);
int fibonacci(int x, int y, int a)
{
    int i,b;
    for(i=1;i<=a;++i)
    {
        b = x+y;
        printf("\n %d",b);
        x=y;
        y=b;
    }
    return 0;
}

int main()
{
    int x=0, y=1, a, i, b;
    printf("Enter value of n : ");
    scanf("%d",&a);
    printf(" %d \n %d",x,y);
    fibonacci(x,y,a);
    return 0;
}