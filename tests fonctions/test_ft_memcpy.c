/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:38 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:14:39 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_memcpy_test, normal_using)
{
	const void	*src = "Bonjour";
	void	*dest;
	void	*verif;
	size_t	len = strlen(src);
	size_t	n = len + 1;

	dest = malloc(sizeof(char) * n);
	verif = malloc(sizeof(char) * n);
	memset(dest, '1', n);
	memset(verif, '1', n);
	ft_memcpy(dest, src, n);
	memcpy(verif, src, n);
	cr_assert_str_eq(dest, verif);
}

Test	(ft_memcpy_test, size_limit)
{
	const void	*src = "Bonjour";
	void	*dest;
	void	*verif;
	size_t	len = strlen(src);
	size_t	n = len - 3;

	dest = malloc(sizeof(char) * (n + 1));
	verif = malloc(sizeof(char) * (n + 1));
	memset(dest, '1', (n + 1));
	memset(verif, '1', (n + 1));
	ft_memcpy(dest, src, n);
	memcpy(verif, src, n);
	cr_assert_eq(memcmp(dest, verif, n), 0);
}

Test	(ft_memcpy_test, no_string)
{
	const void	*src = "";
	void	*dest;
	void	*verif;
	size_t	len = strlen(src);
	size_t	n = len + 1;

	dest = malloc(sizeof(char) * n);
	verif = malloc(sizeof(char) * n);
	memset(dest, '1', n);
	memset(verif, '1', n);
	ft_memcpy(dest, src, n);
	memcpy(verif, src, n);
	cr_assert_str_eq(dest, verif);
}

Test	(ft_memcpy_test, more_than_max_size)
{
	const void	*src = "Bonjour";
	void	*dest;
	void	*verif;
	size_t	len = strlen(src);
	size_t	n = len + 3;

	dest = malloc(sizeof(char) * n);
	verif = malloc(sizeof(char) * n);
	memset(dest, '1', n);
	memset(verif, '1', n);
	ft_memcpy(dest, src, n);
	memcpy(verif, src, n);
	cr_assert_str_eq(dest, verif);
}

Test	(ft_memcpy_test, no_size)
{
	const void	*src = "Bonjour";
	void	*dest;
	void	*verif;
	size_t	len = strlen(src);
	size_t	n = 0;

	dest = malloc(sizeof(char) * (len + 1));
	verif = malloc(sizeof(char) * (len + 1));
	memset(dest, '1', (len + 1));
	memset(verif, '1', (len + 1));
	ft_memcpy(dest, src, n);
	memcpy(verif, src, n);
	cr_assert_eq(memcmp(dest, verif, n), 0);
}