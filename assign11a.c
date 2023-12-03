
#include<stdio.h>
#include<string.h>

void insertion_str(char str1[50], char str2[50], char str3[100]);

int main()
{
    char str1[50], str2[50], str3[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str1);
    getchar();

    printf("Enter another string: ");
    scanf("%[^\n]", str2);

    insertion_str(str1, str2, str3);

    return 0;
}

void insertion_str(char str1[50], char str2[50], char str3[100])
{
    int pos;

    printf("Enter position : ");
    scanf("%d", &pos);

    strncpy(str3, str1, pos);
    strcat(str3, str2);
    strcat(str3, str1 + pos + 1);

    printf("%s", str3);
}
