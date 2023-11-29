#include <stdio.h>
int main()
{
    void *p;
    int a=24;
    char b='R';
    p = &a;
    printf("%d",*(int*)p);
    p = &b;
    printf("\n%c",*(char*)p);
}