/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:05:08 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/09 11:05:10 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}

//int		main(void)
//{
//	char dest[20] = "123";
//	char src[] = "4567890";
//	unsigned int nb = 6;
//
//	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
//	printf("result = %s\n-----\n", ft_strncat(dest, src, nb));
//
//	return (0);
//}