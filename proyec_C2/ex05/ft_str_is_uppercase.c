/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:17:34 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/02 17:53:59 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;

	str = "";
	printf("%d", ft_str_is_uppercase(str));
} */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0])
	{
		while (str[i])
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
