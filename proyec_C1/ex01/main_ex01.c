/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:56:53 by zmartine          #+#    #+#             */
/*   Updated: 2022/02/24 10:26:11 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*nbr2;
	int	**nbr3;
	int	***nbr4;
	int	****nbr5;
	int	*****nbr6;
	int	******nbr7;
	int	*******nbr8;
	int	********nbr9;
	int	*********nbr;

	a = 0;
	nbr2 = &a;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	nbr = &nbr9;
	ft_ultimate_ft(nbr);
	printf("%d", *********nbr);
	return (0);
}
