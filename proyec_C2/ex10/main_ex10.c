/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:13:52 by zmartine          #+#    #+#             */
/*   Updated: 2022/03/02 20:14:20 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
}
