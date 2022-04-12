/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:28:57 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/09 20:24:21 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;

	nb = 32;
	printf("%d", ft_is_prime(nb));
} */

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c < nb)
	{
		if (!(nb % c))
			return (0);
		c++;
	}
	return (1);
}
