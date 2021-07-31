/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:39:07 by ceduard2          #+#    #+#             */
/*   Updated: 2021/07/27 01:25:00 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_uppercase(char c);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_upper;

	i = 0;
	is_upper = 1;
	while (str[i] != '\0')
	{
		is_upper = ft_check_uppercase(str[i]);
		if (is_upper == 0)
		{
			break ;
		}
		i++;
	}
	return (is_upper);
}

int	ft_check_uppercase(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
