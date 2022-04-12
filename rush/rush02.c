/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:28:21 by zmartine          #+#    #+#             */
/*   Updated: 2022/02/20 22:40:00 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	filas(int base, int altura, int x, int y);

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
			if (altura == 0)
			{
				filas(base, altura, x, y);
			}
			else if (altura == y - 1)
			{
				filas(base, altura, x, y);
			}
			else if (altura != 0 && altura != y - 1)
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

void	filas(int base, int altura, int x, int y)
{
	if (altura == 0 && base == 0)
	{
		ft_putchar('A');
	}
	else if (altura == 0 && base == x - 1)
	{
		ft_putchar('A');
	}
	else if (altura == y - 1 && base == 0 || base == x - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	columnas(int base, int x)
{
	if (base == 0 || base == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
