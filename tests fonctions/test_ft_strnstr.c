/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:16:01 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/08 22:22:26 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <bsd/string.h>

Test	(ft_strnstr_test, basic_found_at_start)
{
	const char	*str = "Bonjour les amis";
	const char	*finder = "Bonjour";
	char	*test;
	char	*verif;
	size_t	len = strlen(str);

	test = ft_strnstr(str, finder, len);
	verif = ft_strnstr(str, finder, len);
	cr_assert_str_eq(test, verif);
}

Test	(ft_strnstr_test, found_in_middle)
{
	const char	*str = "Bonjour les amis";
	const char	*finder = "les";
	char	*test;
	char	*verif;
	size_t	len = strlen(str);

	test = ft_strnstr(str, finder, len);
	verif = ft_strnstr(str, finder, len);
	cr_assert_str_eq(test, verif);
}

Test	(ft_strnstr_test, finder_not_found)
{
	const char	*str = "Bonjour les amis";
	const char	*finder = "z";
	char	*test;
	char	*verif;
	size_t	len = strlen(str);

	test = ft_strnstr(str, finder, len);
	verif = ft_strnstr(str, finder, len);
	cr_assert_null(test);
	cr_assert_null(verif);
}

Test	(ft_strnstr_test, finder_empty)
{
	const char	*str = "Bonjour les amis";
	const char	*finder = "";
	char	*test;
	char	*verif;
	size_t	len = strlen(str);

	test = ft_strnstr(str, finder, len);
	verif = ft_strnstr(str, finder, len);
	cr_assert_str_eq(test, verif);
}

Test	(ft_strnstr_test, len_zero)
{
	const char	*str = "Bonjour les amis";
	const char	*finder = "les";
	char	*test;
	char	*verif;
	size_t	len = 0;

	test = ft_strnstr(str, finder, len);
	verif = ft_strnstr(str, finder, len);
	cr_assert_eq(test, verif);
}

Test	(ft_strnstr_test, finder_equals_str)
{
	const char	*str = "Bonjour les amis";
	const char	*finder = "Bonjour les amis";
	char	*test;
	char	*verif;
	size_t	len = strlen(str);

	test = ft_strnstr(str, finder, len);
	verif = ft_strnstr(str, finder, len);
	cr_assert_str_eq(test, verif);
}

Test	(ft_strnstr_test, finder_longer_than_str)
{
	const char	*str = "Bo";
	const char	*finder = "Bonjour";
	char	*test;
	char	*verif;
	size_t	len = 2;

	test = ft_strnstr(str, finder, len);
	verif = ft_strnstr(str, finder, len);
	cr_assert_null(test);
	cr_assert_null(verif);
}

Test	(ft_strnstr_test, special_characters)
{
	const char	*str = "Bonjour @ amis";
	const char	*finder = "@";
	char	*test;
	char	*verif;
	size_t	len = strlen(str);

	test = ft_strnstr(str, finder, len);
	verif = ft_strnstr(str, finder, len);
	cr_assert_str_eq(test, verif);
}