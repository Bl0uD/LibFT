/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:40 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:41 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_strncat_test, normal_using)
{
	const	char	*src = "jour";
	const	char	*dest = "Bon";
	char	*res;
	char	*res2;
	size_t	n = 6;
	size_t	len;

	len = strlen(dest) + strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	strcpy(res, dest);
	strcpy(res2, dest);
	ft_strncat(res, src, n);
	strncat(res2, src, n);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strncat_test, exact_size)
{
	const	char	*src = "jour";
	const	char	*dest = "Bon";
	char	*res;
	char	*res2;
	size_t	n = strlen(src);
	size_t	len;

	len = strlen(dest) + strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	strcpy(res, dest);
	strcpy(res2, dest);
	ft_strncat(res, src, n);
	strncat(res2, src, n);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strncat_test, size_0)
{
	const	char	*src = "jour";
	const	char	*dest = "Bon";
	char	*res;
	char	*res2;
	size_t	n = 0;
	size_t	len;

	len = strlen(dest) + strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	strcpy(res, dest);
	strcpy(res2, dest);
	ft_strncat(res, src, n);
	strncat(res2, src, n);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strncat_test, more_than_max_size)
{
	const	char	*src = "jour";
	const	char	*dest = "Bon";
	char	*res;
	char	*res2;
	size_t	n = strlen(src) + 10;
	size_t	len;

	len = strlen(dest) + strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	strcpy(res, dest);
	strcpy(res2, dest);
	ft_strncat(res, src, n);
	strncat(res2, src, n);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strncat_test, empty_dest)
{
	const	char	*src = "jour";
	const	char	*dest = "";
	char	*res;
	char	*res2;
	size_t	n = 6;
	size_t	len;

	len = strlen(dest) + strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	strcpy(res, dest);
	strcpy(res2, dest);
	ft_strncat(res, src, n);
	strncat(res2, src, n);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strncat_test, empty_src)
{
	const	char	*src = "";
	const	char	*dest = "Bon";
	char	*res;
	char	*res2;
	size_t	n = 4;
	size_t	len;

	len = strlen(dest) + strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	strcpy(res, dest);
	strcpy(res2, dest);
	ft_strncat(res, src, n);
	strncat(res2, src, n);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strncat_test, no_src_no_dest)
{
	const	char	*src = "";
	const	char	*dest = "";
	char	*res;
	char	*res2;
	size_t	n = 6;
	size_t	len;

	len = strlen(dest) + strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	strcpy(res, dest);
	strcpy(res2, dest);
	ft_strncat(res, src, n);
	strncat(res2, src, n);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strncat_test, no_src_no_dest_no_size)
{
	const	char	*src = "";
	const	char	*dest = "";
	char	*res;
	char	*res2;
	size_t	n = 0;
	size_t	len;

	len = strlen(dest) + strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	strcpy(res, dest);
	strcpy(res2, dest);
	ft_strncat(res, src, n);
	strncat(res2, src, n);
	cr_assert_str_eq(res, res2);
}