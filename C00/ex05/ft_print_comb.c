/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:36:32 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/04 10:36:35 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char i, char j, char k)

{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7' )
	{
		j = i + 1;
		while (j <= '8' )
		{
			k = j + 1;
			while (k <= '9' )
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
