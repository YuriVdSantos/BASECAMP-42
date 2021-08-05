/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 02:03:21 by yvieira-          #+#    #+#             */
/*   Updated: 2021/07/30 19:05:43 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	char	frase;
	int		contador;

	contador = 0;
	frase = (*(str + contador));
	while (frase != '\0')
	{
		frase = (*(str + contador));
		contador++;
	}
	contador--;
	return (contador);
}
