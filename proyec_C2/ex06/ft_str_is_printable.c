/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:17:34 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/02 17:54:04 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;

	str = "";
	printf("%d", ft_str_is_printable(str));
} */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0])
	{
		while (str[i])
		{
			if (!(str[i] >= 32 && str[i] <= 126))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
