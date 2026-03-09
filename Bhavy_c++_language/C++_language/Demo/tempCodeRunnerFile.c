//to check whether a character is uppercase or lowercase.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character=\n");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("It is lower case character\n");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("It is upper case character\n");
    }
    else
    {
        printf("its is invalid character\n");
    }
    return 0;
}