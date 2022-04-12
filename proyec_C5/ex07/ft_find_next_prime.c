/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:28:57 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/09 20:29:46 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;
	int	c;

	nb = 32;
	printf("%d", ft_find_next_prime(nb));
} */

int	ft_is_prime(int nb)
{
	c = 2;
	if (nb < 2)
		return (0);
	while (c < nb)
	{
		if (!(nb % c))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483629)
		return (2147483629);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
