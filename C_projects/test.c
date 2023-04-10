#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    void rev_string(char *s);
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

void rev_string(char *s)
{
    int i = 0, j;
    char a, b;

    whiel (s[i] != '\0')
        i++;
    for (j = 0; j < i - 1; j++)
    {
        a = s[j];
        b = s[i];
        s[i] = b;
        s[j] = a;
    }
}