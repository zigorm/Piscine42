/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:13:46 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/07 13:12:13 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */

/* char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[25] = "zigor";
	char	src[20] = " martinez";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	strcat(dest, src);
	printf("%s", dest);
} */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[i])
	{
		dest[count] = src [i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
