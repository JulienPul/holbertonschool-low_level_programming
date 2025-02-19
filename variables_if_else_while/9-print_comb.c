#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Description: Numbers are separated by ", " and printed in ascending order.
 * The program only uses putchar and does not exceed four calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int ch;

    for (ch = '0'; ch <= '9'; ch++) /* Boucle de '0' à '9' */
    {
        putchar(ch); /* Affiche le chiffre */

        if (ch != '9') /* Si ce n'est pas le dernier chiffre, ajoute ", " */
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n'); /* Nouvelle ligne */
    return (0);
}

