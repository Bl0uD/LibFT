/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:22 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:22:29 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_strcmp_test, basic_equal)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Bonjour";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test(ft_strcmp_test, basic_not_equal)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Coucou";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test(ft_strcmp_test, bigger)
{
	char	*s1 = "Bonjour";
	char	*s2 = "Bonjou";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_gt(test, 0);
	cr_assert_gt(verif, 0);
}

Test(ft_strcmp_test, smaller)
{
	char	*s1 = "Bonjou";
	char	*s2 = "Bonjour";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test(ft_strcmp_test, empty_vs_non_empty)
{
	char	*s1 = "";
	char	*s2 = "Bonjour";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test(ft_strcmp_test, both_empty)
{
	char	*s1 = "";
	char	*s2 = "";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test(ft_strcmp_test, special_characters)
{
	char	*s1 = "Hello!";
	char	*s2 = "Hello!";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test(ft_strcmp_test, numbers)
{
	char	*s1 = "Hello123";
	char	*s2 = "Hello123";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_eq(test, verif);
}

Test(ft_strcmp_test, non_printable_characters)
{
	char	*s1 = "Hello\x01";
	char	*s2 = "Hello\x01";

	int		test = ft_strcmp(s1, s2);
	int		verif = strcmp(s1, s2);
	cr_assert_eq(test, verif);
}