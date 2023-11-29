#include <stdio.h>
void swap(int*x,int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\n Values after swapping:%d %d",*x,*y);
}
int main()
{
    int a,b;
    printf("ENTER a and b: ");
    scanf("%d %d",&a,&b);
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    swap(p1,p2);
}
