/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramaros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:05:28 by jramaros          #+#    #+#             */
/*   Updated: 2026/11/17 10:17:47 by jramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(unsigned int c)
{
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexa_base[c / 16]);
	ft_putchar(hexa_base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (32 <= str[i] && str[i] < 127)
			ft_putchar(str[i]);
		else
			ft_hexa(str[i]);
		i++;
	}
}
int main ()
{
	char  x [] = {"Hello\nHow are you?"};
	
	ft_putstr_non_printable(x);
	return (1);
}

