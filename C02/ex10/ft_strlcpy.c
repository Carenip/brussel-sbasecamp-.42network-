/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:37:02 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/08 11:37:04 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	counter;

	a = 0;
	counter = 0;
	while (src[a] != '\0')
		a++;
	if (size != 0)
	{
		while (src[counter] != '\0' && counter < (size))
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = 0;
	}
	return (a);
}
