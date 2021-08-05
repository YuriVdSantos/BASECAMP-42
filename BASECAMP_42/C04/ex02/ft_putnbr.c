#include<unistd.h>

void	ft_putchar(int a);
void	ft_long_putnbr(long nbr);

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_long_putnbr(nbr);
}

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

void	ft_long_putnbr(long nbr)
{
	if (nbr >= 10)
		ft_long_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}
