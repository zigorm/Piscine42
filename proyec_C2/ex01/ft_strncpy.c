/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:13:46 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/02 17:54:13 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[] = "zigor";
	char	src[] = "martinez";

	ft_strncpy(dest, src, 4);
	printf("%s", dest);
} */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	size;

	size = 0;
	while (src[size] && size < n)
	{
		dest[size] = src[size];
		size++;
	}
	while (size < n)
	{
		dest[size] = '\0';
		size++;
	}
	return (dest);
}
