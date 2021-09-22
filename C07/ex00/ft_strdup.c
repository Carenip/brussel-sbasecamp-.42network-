/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 07:24:19 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/14 07:24:20 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	char	*dest;
	int		strl;

	c = 0;
	strl = 0;
	while (src[strl] != '\0')
	{
		strl++;
	}
	dtes = (char *)malloc((strl + 1) * sizeof(char));
	while (c <= strl)
	{
		dest[c] = src[c];
		c ++;
	}
	dest[c] = '\0';
	return (dest);
}

// #include <stdio.h>
// char *ft_strdup(char *src);
// int main(void)
// {
// 	printf("%s\n", ft_strdup("Hallo schatjeeeeeeeeeee"));
// 	return (0);
// }