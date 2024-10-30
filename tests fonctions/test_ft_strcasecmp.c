/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcasecmp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:11 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:12 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <strings.h>
#include <criterion/criterion.h>

Test	(ft_strcasecmp_test, basic_equal_case_insensitive)
{
	const char	*s1 = "Bonjour";
	const char	*s2 = "Bonjour";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test	(ft_strcasecmp_test, same_s_with_CAPS)
{
	const char	*s1 = "bonJour";
	const char	*s2 = "BonjouR";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test	(ft_strcasecmp_test, s1_smaller_than_s2)
{
	const char	*s1 = "Bonjou";
	const char	*s2 = "Bonjour";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test	(ft_strcasecmp_test, s1_bigger_than_s2)
{
	const char	*s1 = "Bonjour";
	const char	*s2 = "Bonjou";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_gt(test, 0);
	cr_assert_gt(verif, 0);
}

Test	(ft_strcasecmp_test, s1_smaller_than_s2_a_char)
{
	const char	*s1 = "Banjour";
	const char	*s2 = "Bonjour";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test	(ft_strcasecmp_test, s1_bigger_than_s2_a_char)
{
	const char	*s1 = "Bonjour";
	const char	*s2 = "Banjour";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_gt(test, 0);
	cr_assert_gt(verif, 0);
}

Test	(ft_strcasecmp_test, empty_vs_non_empty)
{
	const char	*s1 = "";
	const char	*s2 = "Bonjour";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test	(ft_strcasecmp_test, both_empty)
{
	const char	*s1 = "";
	const char	*s2 = "";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test	(ft_strcasecmp_test, special_characters)
{
	const char	*s1 = "Hello!";
	const char	*s2 = "Hello!";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test	(ft_strcasecmp_test, numbers)
{
	const char	*s1 = "Hello123";
	const char	*s2 = "Hello123";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test	(ft_strcasecmp_test, non_printable_characters)
{
	const char	*s1 = "Hello\x01";
	const char	*s2 = "Hello\x01";

	int		test = ft_strcasecmp(s1, s2);
	int		verif = strcasecmp(s1, s2);
	cr_assert_eq(test, verif);
}