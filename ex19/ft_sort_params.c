#include "../libft/libft.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

void ft_swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac < 2)
        return (1);
    i = 0;
    while (i < ac - 1)
    {
        j = 1;
        while (j < ac - 1)
        {
            if (ft_strcmp(av[j], av[j + 1]) > 0)
                ft_swap(&av[j], &av[j + 1]);
            j++;
        }
        i++;
    }
    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            ft_putchar(av[i][j]);
            j++;
        }
        ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');
}