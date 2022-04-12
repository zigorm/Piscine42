/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:17:34 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/02 17:53:56 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;

	str = "";
	printf("%d", ft_str_is_lowercase(str));
} */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0])
	{
		while (str[i])
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}
