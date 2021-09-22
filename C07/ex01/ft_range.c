/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 07:24:45 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/14 07:24:46 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		*(tab + i) = min;
		min++;
		i++;
	}
	return (tab);
}

int main()
{
	int *range = ft_range(-15, 5);
	if (range == NULL)
	{
		printf("NULL pointer has been returned.\n");
		return (0);
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}