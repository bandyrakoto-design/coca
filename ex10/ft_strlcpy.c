/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramaros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:28:47 by jramaros          #+#    #+#             */
/*   Updated: 2026/11/17 09:31:07 by jramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	i;

	s = 0;
	i = 0;
	while (src[s] != 0)
	{
		s++;
		if (size == 0)
			return (s);
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (s);
	}
}
int main ()
{
	char  x [] = {"abc"};
	char y [] = {"efg"};
	ft_strlcpy(x, y, 1);
	printf("%d",ft_strlcpy(x, y, 1));
	return (1);
}
