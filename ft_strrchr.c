/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:02:33 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/08 20:34:55 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include <string.h>
#include "libft.h"
#include "stdio.h"

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
	char		*test;
	char		*verif;
	char		*a;
	char		*b;
	int			c = '\0';

	test = strdup(str);
	verif = strdup(str);
	a = ft_strrchr(test, c);
	b = strrchr(verif, c);
	printf("ft_memmem = %s", a);
	printf("\n");
	printf("memmem = %s", b);
	printf("\n");
	return (0);
}*/