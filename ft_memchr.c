/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:49:21 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:09:02 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	char		*verif;
	int			c = 'c';
	size_t		n = strlen(src);

	dest = strdup(src);
	verif = strdup(src);
	printf("ft_memchr = %p\n", ft_memchr(src, c, n));
	printf("memchr = %p\n", memchr(src, c, n));
	printf("ft_memchr = %s\n", (char *)ft_memchr(src, c, n));
	printf("memchr = %s\n", (char *)memchr(src, c, n));
	return (0);
}
*/