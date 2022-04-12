/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:39:37 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/03 10:27:43 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest[] = "Zigor";
	char			src[] = "Martinez";
	unsigned int	size;

	printf("%s\n", src);
	printf("%s\n", dest);
	size = ft_strlcpy(dest, src, 5);
	printf("%d\n", size);
	write(1, dest, 5);
	return (0);
} */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	i;

	cont = 0;
	i = 0;
	while (src[cont] != '\0')
		cont++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (cont);
}
