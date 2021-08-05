/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 01:17:30 by ceduard2          #+#    #+#             */
/*   Updated: 2021/07/27 01:30:54 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	s;

	i = 0;
	s = size - 1;
	while (i < s)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			break ;
		}
		++i;
	}
	if (size != 0)
	{
		dest[i + 1] = '\0';
	}	
	return (ft_strlen(src));
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
