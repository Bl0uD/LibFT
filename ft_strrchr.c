/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:02:33 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:02:53 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include <string.h>
#include "libft.h"
#include "stdio.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	t;

	i = 0;
	t = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			t = i;
		if (str[i + 1] == '\0' && t != -1)
			return ((char *)&str[t]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[t]);
	return (NULL);
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