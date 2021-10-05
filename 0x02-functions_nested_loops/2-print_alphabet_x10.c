#include "main.h"
/**
 * main - print alphabets
 * Return: 0
 */
void ft_print_alphabet(void)
{
    int s = 0;
    int n;
    while (s < 10)
{
    for (n = 'a'; n <= 'z'; n++)
    {
        putchar(n);
    }
    s++;
    putchar('\n');
}

}
int main(void)
{
    ft_print_alphabet();
    return (0);
}
