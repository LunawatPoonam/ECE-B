// A program to check whether given string is palidrome or not 
#include<stdio.h>
#include<string.h>

void palindrome_check(char str[100]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]",str);
    
    palindrome_check(str);
}
void palindrome_check(char str[100])
{
    int len;
    int isPalindrome = 1; 
    len = strlen(str);
    for(int i = 0; i < len/2;i++)
    {
        if(str[i] != str[len - i - 1])
        {
            isPalindrome = 0; 
            break;
        }  
    }
    if(isPalindrome == 1)
    {
        printf("It is palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
