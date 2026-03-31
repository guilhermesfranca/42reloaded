int ft_iterative_factorial(int nb)
{
    int res;
    
    if (nb < 0)
        return (0);

    res = 1;
    while(nb > 1)
    {
        res = res * nb;
        nb--;
    }
    return (res);
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{   

    printf("%d\n", ft_iterative_factorial(5));
    
}