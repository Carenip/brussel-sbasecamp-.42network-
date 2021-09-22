/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:04:42 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/09 11:04:43 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		lenght++;
		str++;
	}
	return (lenght);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}

//int		main(void)
//{
//	char dest[20] = "Hello";
//	char src[] = ", world!";
//
//	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
//	ft_strcat(dest, src);
//	printf("result = %s\n-----\n", dest);
//
//	return (0);
//}