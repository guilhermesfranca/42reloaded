#include "../libft/libft.h"

int main(int ac, char **av)
{
    int i;
    int j;

    if(ac < 2)
        return (0);
    i = 0;

    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            ft_putchar(av[i][j]);
            j++;
        }
        ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');
}