/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:52 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:23:40 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include <string.h>
#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_memmem_test, normal_using)
{
	void	*src = "Bonjour";
	void	*finder = "n";
	void	*test;
	void	*verif;
	size_t	srclen = 7;
	size_t	finderlen = 1;

	test = strdup(src);
	verif = strdup(src);
	ft_memmem(test, srclen, finder, finderlen);
	memmem(verif, srclen, finder, finderlen);
	cr_assert_str_eq(test, verif);
}

Test(ft_memmem_test, no_src)
{
	void	*src = "";
	void	*finder = "n";
	void	*test;
	void	*verif;
	size_t	srclen = 0;
	size_t	finderlen = 1;

	test = strdup(src);
	verif = strdup(src);
	ft_memmem(test, srclen, finder, finderlen);
	memmem(verif, srclen, finder, finderlen);
	cr_assert_str_eq(test, verif);
}

Test(ft_memmem_test, no_finder)
{
	void	*src = "Bonjour";
	void	*finder = "";
	void	*test;
	void	*verif;
	size_t	srclen = 7;
	size_t	finderlen = 0;

	test = strdup(src);
	verif = strdup(src);
	ft_memmem(test, srclen, finder, finderlen);
	memmem(verif, srclen, finder, finderlen);
	cr_assert_str_eq(test, verif);
}