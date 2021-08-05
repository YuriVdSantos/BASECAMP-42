#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rush(int x, int y)
{
    int hoz;
    int vert;

    hoz = 1;
    while (hoz <= y)
    {
        vert = 1;
        while (vert <= x)
        {
            if ((vert == 1 && hoz == 1) || (vert == x && hoz == y))
                ft_putchar('A');
            else if ((vert == x && hoz == 1) || (hoz == y && vert == 1))
                ft_putchar('C');
            else if ((vert > 1 && vert < x) && (hoz > 1 && hoz < y))
                ft_putchar(' ');
            else
                ft_putchar('B');    
            vert++;
        }
        ft_putchar('\n');
        hoz++;
    }
}

int main(void)
{
    rush(5, 1);
    return 0;
}