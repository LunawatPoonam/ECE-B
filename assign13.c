// A program to display the position of character ch in the string str or -1 if doesn't contain ch
#include<stdio.h>
#include<string.h>

void position_of_character(char str1[50]);

int main()
{
    char str1[50];

    printf("Enter a string: ");
    scanf("%[^\n]", str1);
    getchar();
    position_of_character(str1);

    return 0;
}
void position_of_character(char str1[50])
{
    char ch;
    int pos;
    printf("Enter the character u want to search in your string: ");
    scanf(" %c",&ch);
    if(strchr(str1,ch) != NULL)
    {
        for (int i = 0; i < strlen(str1); i++)
        {
        if (str1[i] == ch)
            {
                printf("Found at position: %d\n", i + 1);
                
                break;
            }
        }  
    }
    else
    {
       printf(" -1 "); 
    }
}
