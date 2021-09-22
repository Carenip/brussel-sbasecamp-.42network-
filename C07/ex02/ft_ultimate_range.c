/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 07:25:05 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/14 07:25:06 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (malloc(sizeof(int) * (max - min)));
	if ((malloc(sizeof(int) * (max - min))) == NULL)
		return (-1);
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (i);
}

#include <stdio.h>
int main()
{
	int *range;
	int taille;
	taille = ft_ultimate_range(&range, 5, 5);
	printf("Taille = %d\n",taille);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}