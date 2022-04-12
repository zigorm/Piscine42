/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:38:25 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/09 20:13:29 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	i;
	int	power;

	printf("%d", ft_iterative_power(2, 2));
} */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	power;

	i = 1;
	power = nb;
	if (nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ < power)
		power = power * nb;
	return (power);
}
