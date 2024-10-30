/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:03:13 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:03:25 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <criterion/criterion.h>

char	*ft_strstr(const char *str, const char *finder)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*finder)
		return ((char *)str);
	while (str[i] != '\0')
	{
		if (str[i] == finder[j])
			j++;
		else
			j = 0;
		if (j == ft_strlen(finder))
			return ((char *)&str[i - j + 1]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Bonjour les amis";
	const char	*finder = "les";
	void		*test;
	void		*verif;
	void		*a;
	void		*b;

	test = strdup(str);
	verif = strdup(str);
	a = ft_strstr(test, finder);
	b = strstr(verif, finder);
	printf("ft_strstr = %s", a);
	printf("\n");
	printf("strstr = %s", b);
	printf("\n");
	return (0);
}*/