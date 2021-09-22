/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 08:06:13 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/13 08:06:15 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] > s2[a])
			return (1);
		if (s2[a] > s1[a])
			return (-1);
		a++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		a;
	char	*tmp;

	a = 1;
	while (a < argc - 1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			tmp = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = tmp;
			a = 0;
		}
		a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
