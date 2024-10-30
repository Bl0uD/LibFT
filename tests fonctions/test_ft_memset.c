/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:59 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:00 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_memset_test, basic_fill)
{
	void	*src = "Bonjour";
	void	*dest;
	void	*test;
	int		c = 'A';
	size_t	n = strlen(src);

	dest = strdup(src);
	test = strdup(src);
	ft_memset(dest, c, 5);
	memset(test, c, 5);
	cr_assert_str_eq(dest, test);
	free(dest);
	free(test);
}

Test	(ft_memset_test, full_fill)
{
	void	*src = "123456789";
	void	*dest;
	void	*test;
	int		c = 'A';
	size_t	n = strlen(src);
	
	dest = strdup(src);
	test = strdup(src);
	ft_memset(dest, c, n);
	memset(test, c, n);
	cr_assert_str_eq(dest, test);
	free(dest);
	free(test);
}

Test	(ft_memset_test, zero_length)
{
	void	*src = "123456789";
	void	*dest;
	void	*test;
	int		c = 'A';
	size_t	n = 0;
	
	dest = strdup(src);
	test = strdup(src);
	ft_memset(dest, c, n);
	memset(test, c, n);
	cr_assert_str_eq(dest, test);
	free(dest);
	free(test);
}

Test	(ft_memset_test, fill_with_null)
{
	void	*src = "123456789";
	void	*dest;
	void	*test;
	int		c = '\0';
	size_t	n = strlen(src);
	
	dest = strdup(src);
	test = strdup(src);
	ft_memset(dest, c, n);
	memset(test, c, n);
	cr_assert_str_eq(dest, test);
	free(dest);
	free(test);
}

Test	(ft_memset_test, empty_memory)
{
	void	*src;
	void	*test;
	int		c = 'X';
	size_t	n = 10;

	src = malloc(10);
	test = malloc(10);
	src = ft_memset(src, c, n);
	test = memset(src, c, n);
	cr_assert_arr_eq(src, test, n);
}