/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paul <cde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 02:09:16 by cde-paul          #+#    #+#             */
/*   Updated: 2021/07/28 02:30:50 by cde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			i++;
		}
		else
		{
			if (c == '\0')
				return (1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
