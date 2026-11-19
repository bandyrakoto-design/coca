/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramaros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:12:40 by jramaros          #+#    #+#             */
/*   Updated: 2026/11/17 09:13:33 by jramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((32 <= str[i] && str[i] < 127)))
			return (0);
		i++;
	}
	return (1);
}
int main ()
{
	char  x [] = {"\n"};
	
	printf("%d",ft_str_is_printable(x));
	return (1);
}
