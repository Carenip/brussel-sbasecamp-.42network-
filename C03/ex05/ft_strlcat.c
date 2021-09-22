/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:05:35 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/09 11:05:36 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}

//int		main(void)
// //{
// //	char dest[20] = "123";
// //	char src[] = "4567890";
// //	unsigned int size = 6;
// //	unsigned int result;
// //
// //	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
// //	result = ft_strlcat(dest, src, size);
// //	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result);
// //
// //	return (0);
// //}