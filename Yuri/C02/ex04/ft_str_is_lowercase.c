/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:39:00 by ceduard2          #+#    #+#             */
/*   Updated: 2021/07/27 01:24:27 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_lowercase(char c);

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower;

	i = 0;
	is_lower = 1;
	while (str[i] != '\0')
	{
		is_lower = ft_check_lowercase(str[i]);
		if (is_lower == 0)
		{
			break ;
		}
		i++;
	}
	return (is_lower);
}

int	ft_check_lowercase(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
