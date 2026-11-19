/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramaros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:09:51 by jramaros          #+#    #+#             */
/*   Updated: 2026/11/17 09:10:50 by jramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

int main ()
{
	char  x [] = {"abc"};
	
	printf("%d",ft_str_is_lowercase(x));
	return (1);
}
