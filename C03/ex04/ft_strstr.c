/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:05:22 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/09 11:05:24 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && str[i + c] != '\0')
		{
			if (to_find[c + 1] == '\0')
				return (&str[i]);
			c++;
		}
		i++;
	}
	return (0);
}

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//
//int       main(void)
//{
// char str[] = "012340123456789";
//  char to_find[] = "456";
//
//printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
// printf("%s\n", ft_strstr(str, to_find));
//
//return (0);
//}