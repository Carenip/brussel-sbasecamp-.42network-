/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:13:00 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/11 11:13:02 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

//int		main (void)
//{
//	char str[] = "I'm soooo lonelyyyyyyy";
//	char *p_str;
//
//	p_str = str;
//
//	int i = ft_strlen(p_str);
//	
//	printf("%d\n", i);
//}