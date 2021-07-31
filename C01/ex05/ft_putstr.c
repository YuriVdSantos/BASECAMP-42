/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 01:58:44 by yvieira-          #+#    #+#             */
/*   Updated: 2021/07/30 18:47:46 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	char	frase;
	int		contador;

	contador = 0;
	frase = *(c + contador);
	while (frase != '\0')
	{
		frase = *(c + contador);
		write (1, &frase, 1);
		contador++;
	}
}
