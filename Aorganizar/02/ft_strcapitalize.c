/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paul <cde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 03:23:52 by cde-paul          #+#    #+#             */
/*   Updated: 2021/07/28 03:20:29 by cde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_str_is_alpha(char *str);
char	ft_str_is_numeric(char *str);
char	ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!ft_str_is_alpha(&str[i - 1]))
				if (!ft_str_is_numeric(&str[i - 1]))
					str[i] -= 32;
		}		
	}
	return (str);
}

char	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (*str);
}

char	ft_str_is_alpha(char *str)
{
	char	c;

	c = *str;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

char	ft_str_is_numeric(char *str)
{
	char	c;

	c = *str;
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
