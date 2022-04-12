/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:56:53 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/03 11:49:30 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {5, 6, 7, 1, 4};
	int	size;

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	size = size - 1;
	while (i < size)
	{
		z = tab[i];
		tab[i] = tab[size];
		tab[size] = z;
		size--;
		i++;
	}
}
