#include "../libft/libft.h"

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(int ac, char **av)
{
    (void) ac;
    ft_putstr(av[1]);
    return (0);
}