/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:17:34 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/02 17:54:11 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots QUARENTE-deux; cinquante+et+un ";

	printf("%s", ft_strcapitalize(str));
} */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	letter;

	i = 0;
	letter = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] < '0' || str[i] > '9') && (str[i] < 'a' || str[i] > 'z'))
			letter = 1;
		if (str[i] >= '0' && str[i] <= '9')
			letter = 0;
		if (str[i] >= 'a' && str[i] <= 'z' && letter == 1)
		{
			str[i] = str[i] - 32;
			letter = 0;
		}
		i++;
	}
	return (str);
}
