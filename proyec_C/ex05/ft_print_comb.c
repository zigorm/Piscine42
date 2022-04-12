/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:51:03 by zmartine          #+#    #+#             */
/*   Updated: 2022/02/23 11:12:40 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numero[3];

	numero[0] = '0';
	while (numero[0] <= '9')
	{
		numero[1] = '0';
		while (numero[1] <= '9')
		{
			numero[2] = '0';
			while (numero[2] <= '9')
			{
				if (numero[2] > numero[1] && numero[1] > numero[0])
				{
					write(1, &numero, 3);
					if (numero[0] != '7')
					{
						write(1, ", ", 2);
					}
				}
				numero[2]++;
			}
			numero[1]++;
		}
		numero[0]++;
	}
}
