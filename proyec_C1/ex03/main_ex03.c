/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:56:53 by zmartine          #+#    #+#             */
/*   Updated: 2022/02/24 10:24:21 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int x;
	int e;
	int	*div;
	int	*mod;

	a = 5;
	b = 3;
	
	div = &x;
	mod = &e;
	ft_div_mod(a, b, div, mod);
	printf("a= %d / b= %d = %d\n", a, b, *div);
	printf("rest=%d\n", *mod);
	return (0);
}
