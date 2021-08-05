/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 01:18:31 by ceduard2          #+#    #+#             */
/*   Updated: 2021/07/27 21:46:09 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char_to_hex(char c);
void	ft_print_hex(char c[], int size);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			ft_char_to_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	ft_char_to_hex(char c)
{
	char	str[2];
	int		temp;
	int		dec;
	int		i;

	i = 0;
	dec = c;
	while (dec > 0)
	{
		temp = dec % 16;
		if (temp < 10)
		{
			str[i] = temp + 48;
		}
		else
		{
			str[i] = temp + 87;
		}	
		dec = dec / 16;
		i++;
	}
	ft_print_hex(str, i);
}

void	ft_print_hex(char c[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (size == 1)
		{
			write(1, "0", 1);
		}
		write(1, &c[(size - 1) - i], 1);
		i++;
	}
}
