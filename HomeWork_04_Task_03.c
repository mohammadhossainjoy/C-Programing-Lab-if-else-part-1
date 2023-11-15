#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;

    printf ("Input a Character: ");
    scanf ("%c", &a);

    if ( isxdigit(a))
    {
        printf ("Character is a Valid Hexadecimal digit.\n");
    }
    else
    {
        printf ("Character is not a valid Hexadecimal digit.\n");
    }
return 0;

}
