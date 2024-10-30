/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:25 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:24:36 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <string.h>

Test(ft_memccpy_test, basic_found)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	void		*p1;
	void		*p2;
	int			c = 'o';
	size_t		n = strlen(src);

	dest = strdup(src);
	verif = strdup(src);
	p1 = ft_memccpy(dest, src, c, n);
	p2 = memccpy(verif, src, c, n);

	cr_assert_str_eq(dest, verif);
}

Test(ft_memccpy_test, char_not_found)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	void		*p1;
	void		*p2;
	int			c = 'z';
	size_t		n = strlen(src);

	dest = strdup(src);
	verif = strdup(src);
	p1 = ft_memccpy(dest, src, c, n);
	p2 = memccpy(verif, src, c, n);
	cr_assert_str_eq(dest, verif);
	cr_assert_eq(p1, p2);
}

Test(ft_memccpy_test, n_smaller_than_char_position)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	void		*p1;
	void		*p2;
	int			c = 'a';
	size_t		n = strlen(src) - 10;

	dest = strdup(src);
	verif = strdup(src);
	p1 = ft_memccpy(dest, src, c, n);
	p2 = memccpy(verif, src, c, n);
	cr_assert_str_eq(dest, verif);
	cr_assert_eq(p1, p2);
}

Test(ft_memccpy_test, overlapping_regions)
{
	const void	*src = "123456789";
	void		*dest;
	void		*verif;
	void		*p1;
	void		*p2;
	int			c = 'a';
	size_t		n = 7;

	dest = strdup(src);
	verif = strdup(src);
	p1 = ft_memccpy(dest + 2, src, c, n);
	p2 = memccpy(verif + 2, src, c, n);
	cr_assert_str_eq(dest, verif);
	cr_assert_eq(p1, p2);
}

Test(ft_memccpy_test, zero_length)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	void		*p1;
	void		*p2;
	int			c = 'z';
	size_t		n = 0;

	dest = strdup(src);
	verif = strdup(src);
	p1 = ft_memccpy(dest, src, c, n);
	p2 = memccpy(verif, src, c, n);
	cr_assert_str_eq(dest, verif);
	cr_assert_eq(p1, p2);
}

Test(ft_memccpy_test, found_at_last_position)
{
	const void	*src = "Bonjour comment ca va ?";
	void		*dest;
	void		*verif;
	void		*p1;
	void		*p2;
	int			c = '?';
	size_t		n = strlen(src);

	dest = strdup(src);
	verif = strdup(src);
	p1 = ft_memccpy(dest, src, c, n);
	p2 = memccpy(verif, src, c, n);
	cr_assert_str_eq(dest, verif);
}