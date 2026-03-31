int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while(s1[i] == s2[i] && s1[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(int ac, char **av)
{
    (void) ac;

    printf("%d\n",ft_strcmp(av[1], av[2]));
}
