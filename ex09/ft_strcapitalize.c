/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramaros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:24:39 by jramaros          #+#    #+#             */
/*   Updated: 2026/11/17 09:28:28 by jramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= 0 && str[i] <= 9)
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
int main ()
{
	char x [] = {"hi, how are you? 42words forty-two; fifty+and+one"};
	printf("%s",ft_strcapitalize(x));
	return (1);
}

