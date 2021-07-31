#include <unistd.h>

int		ft_check_base(char *base);
void	ft_putchar(char c);
void	ft_simple_putnbr(long nb, int base_size);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	long_nbr;

	long_nbr = nbr;
	if (ft_check_base(base) == 1)
	{
		if (long_nbr < 0)
		{
			long_nbr = -long_nbr;
			write(1, "-", 1);
		}
		base_size = 0;
		while (base[base_size])
			base_size++;
		ft_simple_putnbr(long_nbr, base_size);
	}
}

void	ft_simple_putnbr(long nb, int base_size)
{
	if (nb >= base_size)
		ft_simple_putnbr(nb / base_size, base_size);
	ft_putchar(nb % base_size + '0');
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	int	adiciona;

	adiciona = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			nb++;
			nb = -nb;
			adiciona = 1;
		}
		else
			nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0' + adiciona);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
