// A program to delete n characters from string
#include <stdio.h>
#include <string.h>

void deletion_str(char str1[50], char str2[50]);

int main()
{
    char str1[50], str2[50];

    printf("Enter a string: ");
    scanf("%[^\n]", str1);
    
    deletion_str(str1, str2);

    return 0;
}

void deletion_str(char str1[50], char str2[50])
{
    int pos, n, len;

    printf("\nEnter the position from where you want to delete characters: ");
    scanf("%d", &pos);

    printf("How many characters do you want to delete: ");
    scanf("%d", &n);

    len = strlen(str1);

    if (len >= (pos + n))
    {
        strncpy(str2, str1, pos);

        strcat(str2, str1 + pos + n);

        printf("%s", str2);
    }
    else
    {
        printf("Deletion can't be done");
    }
}
