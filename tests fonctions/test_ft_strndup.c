/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strndup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:56 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:57 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_strndup_test, normal_using)
{
	const char	*str = "Bonjour";
	size_t	n = strlen(str);

	char	*nb = ft_strndup(str, n);
	cr_assert_str_eq(nb, strndup(str, n));
	free(nb);
}

Test	(ft_strndup_test, empty_string_dup)
{
	const char	*str = "";
	size_t	n = 5;

	char	*nb = ft_strndup(str, n);
	cr_assert_str_eq(nb, strndup(str, n));
	free(nb);
}

Test	(ft_strndup_test, n_larger_than_string_length)
{
	const char	*str = "Bonjour";
	size_t	n = 10;

	char	*nb = ft_strndup(str, n);
	cr_assert_str_eq(nb, strndup(str, n));
	free(nb);
}

Test	(ft_strndup_test, n_less_than_string_length)
{
	const char	*str = "Bonjour";
	size_t	n = 5;

	char	*nb = ft_strndup(str, n);
	cr_assert_str_eq(nb, strndup(str, n));
	free(nb);
}

Test	(ft_strndup_test, n_zero)
{
	const char	*str = "Bonjour";
	size_t	n = 0;

	char	*nb = ft_strndup(str, n);
	cr_assert_str_eq(nb, strndup(str, n));
	free(nb);
}