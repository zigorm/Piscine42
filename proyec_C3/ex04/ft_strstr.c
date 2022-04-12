/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ststr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:13:46 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/07 19:34:48 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*dest;
	char	*src;

	dest = "zigor es el topo";
	src = "or";
	printf("%s", ft_strstr(dest, src));
} */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	i = 0;
	if (to_find[i] != '\0')
	{
		while (str[i])
		{
			z = 0;
			if (to_find[z] == str[i])
			{
				while (to_find[z] && to_find[z] == str[i + z])
				{
					if (to_find[z + 1] == '\0')
						return (&str[i]);
					z++;
				}
			}
			i++;
		}
	}
	else
		return (str);
	return (0);
}
