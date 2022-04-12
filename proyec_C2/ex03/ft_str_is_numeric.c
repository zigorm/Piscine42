/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:17:34 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/03 10:27:23 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;

	str = "2s3";
	printf("%d", ft_str_is_numeric(str));
} */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0])
	{
		while (str[i])
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
