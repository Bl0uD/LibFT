/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:51 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:52 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_strncpy_test, normal_using)
{
	char	*str = "Bonjour";
	char	*dest = "";
	size_t	n = 7;

	dest = malloc(sizeof(char) * strlen(str) + 1);
	char	*nb = ft_strncpy(dest, str, n);
	cr_assert_eq(nb, strncpy(dest, str, n));
}

Test	(ft_strncpy_test, normal_using_size_limit)
{
	char	*str = "Bonjour";
	char	*dest = "";
	size_t	n = 3;

	dest = malloc(sizeof(char) * strlen(str) + 1);
	char	*nb = ft_strncpy(dest, str, n);
	cr_assert_eq(nb, strncpy(dest, str, n));
}

Test	(ft_strncpy_test, size_0)
{
	char	*str = "Bonjour";
	char	*dest = "";
	size_t	n = 0;

	dest = malloc(sizeof(char) * strlen(str) + 1);
	char	*nb = ft_strncpy(dest, str, n);
	cr_assert_eq(nb, strncpy(dest, str, n));
}

Test	(ft_strncpy_test, no_string)
{
	char	*str = "";
	char	*dest = "";
	size_t	n = 5;

	dest = malloc(5);
	char	*nb = ft_strncpy(dest, str, n);
	cr_assert_eq(nb, strncpy(dest, str, n));
}