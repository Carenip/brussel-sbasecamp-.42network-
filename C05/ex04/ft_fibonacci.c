/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 07:32:02 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/12 07:32:03 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	c;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		c = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (c);
	}
	else
		return (-1);
}

#include <stdio.h>
int		main(void)
{
	printf("-10 = %d (-1)\n", ft_fibonacci(-10));
	printf("-3 = %d (-1)\n", ft_fibonacci(-3));
	printf("-1 = %d (-1)\n", ft_fibonacci(-1));
	printf(" 0 = %d (0)\n", ft_fibonacci(0));
	printf(" 1 = %d (1)\n", ft_fibonacci(1));
	printf(" 2 = %d (1)\n", ft_fibonacci(2));
	printf(" 3 = %d (2)\n", ft_fibonacci(3));
	printf(" 4 = %d (3)\n", ft_fibonacci(4));
	printf(" 5 = %d (5)\n", ft_fibonacci(5));
	printf(" 6 = %d (8)\n", ft_fibonacci(6));
	printf(" 7 = %d (13)\n", ft_fibonacci(7));
	printf(" 8 = %d (21)\n", ft_fibonacci(8));
	printf(" 9 = %d (34)\n", ft_fibonacci(9));
	
}