/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:38:52 by ceduard2          #+#    #+#             */
/*   Updated: 2021/07/27 01:23:15 by ceduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_for_num(char c);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_num;

	i = 0;
	is_num = 1;
	while (str[i] != '\0')
	{
		is_num = ft_check_for_num(str[i]);
		if (is_num == 0)
		{
			break ;
		}
		i++;
	}
	return (is_num);
}

int	ft_check_for_num(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
