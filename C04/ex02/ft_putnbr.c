/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:28:20 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/11 11:28:22 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

//int		main(void)
//{
//    printf(" (printed) should be 1");
//    ft_putnbr(1);
//    printf("\n (printed) should be 0");
//    ft_putnbr(0);
//    printf("\n (printed) should be -1");
//    ft_putnbr(-1);
//    printf("\n (printed) should be 2147483647");
//    ft_putnbr(2147483647);
//    printf("\n (printed) should be -21474836478");
//    ft_putnbr(-2147483648);
//    printf("\n");
//    return (0);
//}