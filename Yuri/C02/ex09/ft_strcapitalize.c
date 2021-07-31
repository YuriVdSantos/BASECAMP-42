/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 01:16:31 by ceduard2          #+#    #+#             */
/*   Updated: 2021/07/27 21:45:48 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c);
char	ft_capitalize_first(char c, int index);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{		
		while (ft_is_alpha(str[i]))
		{
			str[i] = ft_capitalize_first(str[i], j);
			i++;
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}

int	ft_is_alpha(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

char	ft_capitalize_first(char c, int index)
{
	if (index == 0 && (c >= 97 && c <= 122))
	{
		c = c - 32;
		return (c);
	}
	else if (index != 0 && (c >= 65 && c <= 90))
	{
		c = c + 32;
	}
	return (c);
}
