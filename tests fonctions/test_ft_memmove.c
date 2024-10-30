/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:55 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:23:33 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_memmove_test, normal_using)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	size_t		len = strlen(src);
	size_t		n = len - 1;

	dest = strdup(src);
	verif = strdup(src);
	ft_memmove(dest, dest, n);
	memmove(verif, verif, n);
	cr_assert_eq(memcmp(dest, verif, n), 0);
}

Test(ft_memmove_test, dest_before_src)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	size_t		len = strlen(src);
	size_t		n = len - 1;

	dest = strdup(src);
	verif = strdup(src);
	ft_memmove(dest, dest + 2, n);
	memmove(verif, verif + 2, n);
	cr_assert_eq(memcmp(dest, verif, n), 0);
}

Test(ft_memmove_test, src_before_dest)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	size_t		len = strlen(src);
	size_t		n = len - 1;

	dest = strdup(src);
	verif = strdup(src);
	ft_memmove(dest + 2, dest, n);
	memmove(verif + 2, verif, n);
	cr_assert_eq(memcmp(dest, verif, n), 0);
}

Test(ft_memmove_test, size_0)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	size_t		n = 0;

	dest = strdup(src);
	verif = strdup(src);
	ft_memmove(dest, dest, n);
	memmove(verif, verif, n);
	cr_assert_eq(memcmp(dest, verif, n), 0);
}

Test(ft_memmove_test, one_octet)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	size_t		n = 1;

	dest = strdup(src);
	verif = strdup(src);
	ft_memmove(dest + 1, dest, n);
	memmove(verif + 1, verif, n);
	cr_assert_eq(memcmp(dest, verif, n), 0);
}

Test(ft_memmove_test, NULL_case)
{
	ft_memmove(NULL, NULL, 0);
}

Test(ft_memmove_test, same_dest)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	size_t		len = strlen(src);
	size_t		n = len - 1;

	dest = strdup(src);
	verif = strdup(src);
	ft_memmove(dest, dest, n);
	memmove(verif, verif, n);
	cr_assert_eq(memcmp(dest, verif, n), 0);
}