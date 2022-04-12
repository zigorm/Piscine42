/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:29:18 by zmartine          #+#    #+#             */
/*   Updated: 2022/02/20 22:22:04 by zmartine         ###   ########.fr       */
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
			if (altura == 0 || altura == y - 1)
			{
				filas(base, altura, x, y);
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

void	filas(int base, int altura, int x, int y)
{
	if (base == 0 && altura == 0)
	{
		ft_putchar('/');
	}
	else if (base == x - 1 && altura == 0)
	{
		ft_putchar('\\');
	}
	else if (base == 0 && altura == y - 1)
	{
		ft_putchar('\\');
	}
	else if (base == x - 1 && altura == y - 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	columnas(int base, int x)
{
	if (base == 0 || base == x - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}
