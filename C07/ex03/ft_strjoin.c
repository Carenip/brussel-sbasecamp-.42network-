/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:47:41 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/16 08:47:43 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*charptr;
	int		count;

	charptr = str;
	count = 0;
	while (*charptr != 0)
	{
		count++;
		charptr++;
	}
	return (count);
}

void	printsep(char **concatptr, char *sep)
{
	while (*sep)
	{
		**concatptr = *sep;
		sep++;
		*concatptr += 1;
	}
}

void	makeconcat(int size, char *concatptr, char **strs, char *sep)
{
	int	n;
	int	i;

	n = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i])
		{
			*concatptr = strs[n][i];
			concatptr++;
			i++;
		}
		if (n == size - 1)
			*concatptr = 0;
		else if (*sep)
			printsep(&concatptr, sep);
		n++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	char	*con;
	int		nb;

	if (size)
	{
		nb = (strs[size - 1] - *strs) + ft_strlen(strs[size - 1]) + 1;
		concat = (char *)malloc(nb + ((ft_strlen(sep) - 1) * (size - 1)));
	}
	else
	{
		concat = malloc(1);
		*concat = 0;
		return (concat);
	}
	con = concat;
	makeconcat(size, con, strs, sep);
	return (concat);
}

// #include <stdio.h>
// int main()
// {
// 	char *table[6];
// 	table[0] = "hallo";
// 	table[1] = "mag";
// 	table[2] = "ik";
// 	table[3] = "je";
// 	table[4] = "bijten";
// 	table[5] = "lekker dier";
// 	printf("%s\n", ft_strjoin(6, table, " "));
// 	return (0);
// }