/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:16:18 by zmartine          #+#    #+#             */
/*   Updated: 2022/02/20 16:23:08 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	filas(int base, int x);

void	columnas(int base, int x);

void	rush(int x, int y)
{
	char	c;
	int		altura;
	int		base;

	altura = 0;
	base = 0;
	while (altura < y)
	{
		while (base < x)
		{
			if (altura == 0 || altura == y - 1)
			{
				filas(base, x);
			}
			if (altura != 0 && altura != y - 1)
			{
				columnas(base, x);
			}
			base++;
		}
		altura++;
		base = 0;
		ft_putchar('\n');
	}
}

void	filas(int base, int x)
{
	if (base == 0 || base == x - 1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	columnas(int base, int x)
{
	if (base == 0 || base == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
