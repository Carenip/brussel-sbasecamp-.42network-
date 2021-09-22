/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 07:46:09 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/09 07:46:11 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	quicksort(int arr[], int l, int r)

{
	int	piv;
	int	split;
	int	i;

	if (l >= r)
		return ;
	piv = arr[r];
	split = l;
	i = l;
	while (i <= r)
	{
		if (arr[i] <= piv)
		{
			ft_swap(&arr[split], &arr[i]);
			split++;
		}
		i++;
	}
	quicksort(arr, l, split - 2);
	quicksort(arr, split, r);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	r;

	l = 0;
	r = size - 1;
	quicksort(tab, l, r);
}
