/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:37:13 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/09 20:38:29 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
} */

void	ft_putnbr(int nb)
{
	char	number;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb / 10)
		{
			ft_putnbr(nb / 10);
		}
		number = (nb % 10 + '0');
		write(1, &number, 1);
	}
}
