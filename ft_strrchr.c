/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ju <ju@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:02:33 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/20 18:07:30 by ju               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include <string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*t;

	if (c == 0)
		return ((char *)str + ft_strlen(str));
	t = NULL;
	while (*str)
	{
		if (*str == (char)c)
			t = (char *)str;
		str++;
	}
	return (t);
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