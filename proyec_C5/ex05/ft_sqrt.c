/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:54:09 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/09 20:20:32 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 1835124443;
	printf("%d", ft_sqrt(nb));
} */

int	ft_sqrt(int nb)
{
	int	c;

	c = 0;
	if (nb > 2147483641)
		return (0);
	while (c * c <= nb)
	{
		if (c * c <= nb)
		{
			return (c);
		}
		c++;
	}
	return (0);
}
