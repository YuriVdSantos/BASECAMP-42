/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:39:13 by ceduard2          #+#    #+#             */
/*   Updated: 2021/07/27 01:26:43 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_printable_chars(char c);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	while (str[i] != '\0')
	{
		is_printable = ft_check_printable_chars(str[i]);
		if (is_printable == 0)
		{
			break ;
		}
		i++;
	}
	return (is_printable);
}

int	ft_check_printable_chars(char c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}
