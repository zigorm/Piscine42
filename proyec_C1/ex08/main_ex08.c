/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:56:53 by zmartine          #+#    #+#             */
/*   Updated: 2022/02/25 11:13:29 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {5, 6, 7, 1, 4};
	int size;

	size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
