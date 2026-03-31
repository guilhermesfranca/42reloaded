int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

#include <stdio.h>

int main(int ac, char **av)
{
    (void) ac;
    printf("%d\n",ft_strlen(av[1]));
}