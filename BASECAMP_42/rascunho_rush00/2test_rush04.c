#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rush(unsigned int x, unsigned int y)
{
    unsigned int hoz;
    unsigned int vert;

    hoz = 1;
    while (hoz <= y)
    {
        vert = 1;
        while (vert <= x)
        {
            if (vert == 1 && hoz == 1)
                ft_putchar('A');
            else if ((vert == x && hoz == 1) || (hoz == y && vert == 1))
                ft_putchar('C');
			else if ((vert == x && hoz == y))
                ft_putchar('A');
            else if ((hoz == 1) || (hoz == y) || (vert == 1) || (vert == x))
                ft_putchar('B');
            else
                ft_putchar(' ');    
            vert++;
        }
        ft_putchar('\n');
        hoz++;
    }
}

int main(void)
{
    rush(45, 75);
    return 0;
}
