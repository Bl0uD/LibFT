/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:46 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:47 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <criterion/criterion.h>

Test	(ft_strncmp_test, equal)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Bonjour";
	size_t	n = 7;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_eq(test, verif);
}

Test	(ft_strncmp_test, basic_not_equal)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Coucou";
	size_t	n = 7;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test	(ft_strncmp_test, smaller)
{
	char	*s1 = "Bonjou";
	char	*s2 = "Bonjour";
	size_t	n = 7;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test	(ft_strncmp_test, bigger)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Bonjou";
	size_t	n = 7;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_gt(test, 0);
	cr_assert_gt(verif, 0);
}

Test	(ft_strncmp_test, n_larger_than_strings)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Bonjour";
	size_t	n = 10;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_eq(test, verif);
}

Test	(ft_strncmp_test, equal_on_n_but_different_after)
{
	char	*s1 = "Bonjour les amis";
	char	*s2 = "Bonjour les copains";
	size_t	n = 7;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_eq(test, 0);
	cr_assert_eq(verif, 0);
}

Test	(ft_strncmp_test, different_length_equal_n_chars)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Bonjour les copains";
	size_t	n = 7;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_eq(test, verif);
}

Test	(ft_strncmp_test, empty_vs_non_empty)
{
	char	*s1 = "";
	char	*s2 = "Bonjour";
	size_t	n = 7;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test	(ft_strncmp_test, both_empty)
{
	char	*s1 = "";
	char	*s2 = "";
	size_t	n = 7;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_eq(test, verif);
}

Test	(ft_strncmp_test, special_characters)
{
	char	*s1 = "Hello!";
	char	*s2 = "Hello!";
	size_t	n = 6;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_eq(test, verif);
}

Test	(ft_strncmp_test, numbers)
{
	char	*s1 = "Hello123";
	char	*s2 = "Hello123!";
	size_t	n = 8;

	int		test = ft_strncmp(s1, s2, n);
	int		verif = strncmp(s1, s2, n);
	cr_assert_eq(test, verif);
}