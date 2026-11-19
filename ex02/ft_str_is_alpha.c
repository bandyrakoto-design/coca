/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramaros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:00:14 by jramaros          #+#    #+#             */
/*   Updated: 2026/11/17 09:07:41 by jramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
int main ()
{
	char a [] = {"abc"};
	printf("%d",ft_str_is_alpha(a));
	return (0);
}
	 
