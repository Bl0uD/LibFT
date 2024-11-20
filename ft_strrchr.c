/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ju <ju@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:02:33 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/20 19:04:11 by ju               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include <string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;

	if (c == 0)
		return ((char *)s + ft_strlen(s));
	last_c = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_c = (char *)s;
		s++;
	}
	return (last_c);
}
/*
int	main(void)
{
	const char	*str = "Bonjour les amis";
	int			c = '\0';

	printf("ft_strrchr = %d", ft_strrchr(str, c));
	printf("\n");
	printf("strrchr = %d", strrchr(str, c));
	printf("\n");
	return (0);
}*/