/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-ridd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:04:14 by sde-ridd          #+#    #+#             */
/*   Updated: 2021/09/09 11:04:15 by sde-ridd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

//int		main()
//{
//	char s1[] = "testing some stuff";
//	char s2[] = "pesting this line for fun :))";
//	char s3[] = "Test";
//
//	printf("s12: %d, s21: %d", ft_strcmp(s1, s2), ft_strcmp(s2, s1));
//	printf("\n\ns12: %d, s21: %d", strcmp(s1, s2), strcmp(s2, s1));
//}