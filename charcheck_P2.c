#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the Character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'))
    {
        printf("\nIt is Character");
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
            printf("\nIt is a Character in Uppercase");
            printf("\nLowercase is %c", ch);
        }
        else
        {
            ch = ch - 32;
            printf("\nIt is a Character in Lowercase");
            printf("\nUppercase is %c", ch);
        }
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("\nIt is a Number");
    }
    else
    {
        printf("\nIt is a Special Character");
    }
}
