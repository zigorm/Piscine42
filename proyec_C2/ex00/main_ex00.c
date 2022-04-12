/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:57:41 by zmartine          #+#    #+#             */
/*   Updated: 2022/02/28 13:43:09 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *des, char *src);

int	main(void)
{
	char	dest[] = "zigor";
	char	src[] = "martinez";

	printf("%s", dest);
	ft_strcpy(dest, src);
	printf(" %s", dest);
}
