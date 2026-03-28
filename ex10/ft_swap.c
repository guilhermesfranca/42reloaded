#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
    
}

int main(void)
{
    int a = 1;
    int b = 5;

    printf("Antes: a = %d, b = %d\n", a, b);

    ft_swap(&a, &b);

    printf("Depois: a = %d, b = %d\n", a, b);

    return 0;
}