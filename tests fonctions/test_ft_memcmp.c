/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:35 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:24:14 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_memcmp_test, equal)
{
	const void	*s1 = "Bonjour";
	const void	*s2 = "Bonjour";
	size_t	n = 7;

	int		test = ft_memcmp(s1, s2, n);
	int		verif = memcmp(s1, s2, n);
	cr_assert_eq(test, verif);
}

Test(ft_memcmp_test, smaller)
{
	const void	*s1 = "Bonjou";
	const void	*s2 = "Bonjour";
	size_t	n = 7;

	int		test = ft_memcmp(s1, s2, n);
	int		verif = memcmp(s1, s2, n);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test(ft_memcmp_test, bigger)
{
	const void	*s1 = "Bonjour";
	const void	*s2 = "Bonjou";
	size_t	n = 7;

	int		test = ft_memcmp(s1, s2, n);
	int		verif = memcmp(s1, s2, n);
	cr_assert_gt(test, 0);
	cr_assert_gt(verif, 0);
}

Test(ft_memcmp_test, equal_smaller_size_limit)
{
	const void	*s1 = "Bonjo";
	const void	*s2 = "Bonjour";
	size_t	n = 4;

	int		test = ft_memcmp(s1, s2, n);
	int		verif = memcmp(s1, s2, n);
	cr_assert_eq(test, 0);
	cr_assert_eq(verif, 0);
}

Test(ft_memcmp_test, smaller_char)
{
	const void	*s1 = "Banjour";
	const void	*s2 = "Bonjour";
	size_t	n = 4;

	int		test = ft_memcmp(s1, s2, n);
	int		verif = memcmp(s1, s2, n);
	cr_assert_lt(test, 0);
	cr_assert_lt(verif, 0);
}

Test(ft_memcmp_test, bigger_char)
{
	const void	*s1 = "Bonjour";
	const void	*s2 = "Banjour";
	size_t	n = 4;

	int		test = ft_memcmp(s1, s2, n);
	int		verif = memcmp(s1, s2, n);
	cr_assert_gt(test, 0);
	cr_assert_gt(verif, 0);
}