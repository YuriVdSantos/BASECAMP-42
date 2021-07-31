/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 02:25:27 by yvieira-          #+#    #+#             */
/*   Updated: 2021/07/30 02:30:05 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_check_for_alpha(char c);

int ft_str_is_alpha(char *str)
{
	int i;
	int is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0')
	{
		is_alpha = ft_str_is_alpha(str[i]);
		if (is_alpha == 0)
		{
			break;
		}
		i++;
	}
	return (is_alpha);
}

int ft_check_for_alpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
