/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ju <ju@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:01:14 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/15 16:02:59 by ju               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *finder, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenfinder;

	i = 0;
	j = 0;
	lenfinder = ft_strlen(finder);
	if (!*finder)
		return ((char *)str);
	while (str[i] != '\0' && lenfinder <= ft_strlen(str))
	{
		if (str[i] == finder[j] && j < len)
			j++;
		else
			j = 0;
		if (i == len)
			return (NULL);
		if (j == lenfinder || j == len)
			return ((char *)&str[i - j + 1]);
		i++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	char	*str = av[1]; //"Bonjour les amis";
	char	*finder = av[2]; //"les";
	size_t	len = strlen(str);

	printf("ft_strnstr = %s\n", ft_strnstr(str, finder, len));
	printf("strnstr = %s\n", strnstr(str, finder, len));
	return (0);
}
*/