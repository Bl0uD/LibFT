/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:19 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:14:20 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_memalloc_test, allocate_basic_size)
{
	size_t	size = 10;
	void	*ptr = ft_memalloc(size);

	cr_assert_not_null(ptr);

	for (size_t i = 0; i < size; i++)
		cr_assert_eq(((unsigned char *)ptr)[i], 0);
	free(ptr);
}

Test(ft_memalloc_test, allocate_large_size)
{
	size_t size = 10000;
	void *ptr = ft_memalloc(size);

	cr_assert_not_null(ptr);
	for (size_t i = 0; i < size; i++)
		cr_assert_eq(((unsigned char *)ptr)[i], 0);
	free(ptr);
}

Test(ft_memalloc_test, allocation_failure)
{
	size_t size = (size_t)-1;  // Taille extrêmement grande, souvent impossible à allouer
	void *ptr = ft_memalloc(size);

	cr_assert_null(ptr);
}

Test(ft_memalloc_test, writable_memory)
{
	size_t size = 10;
	void *ptr = ft_memalloc(size);

	cr_assert_not_null(ptr);
	memset(ptr, 42, size);
	for (size_t i = 0; i < size; i++)
		cr_assert_eq(((unsigned char *)ptr)[i], 42);
	free(ptr);
}

Test(ft_memalloc_test, allocate_single_byte)
{
	size_t size = 1;
	void *ptr = ft_memalloc(size);

	cr_assert_not_null(ptr);
	cr_assert_eq(((unsigned char *)ptr)[0], 0);
	free(ptr);
}

Test(ft_memalloc_test, multiple_small_allocations)
{
	for (size_t i = 0; i < 1000; i++)
	{
		void *ptr = ft_memalloc(1);
		cr_assert_not_null(ptr);
		cr_assert_eq(((unsigned char *)ptr)[0], 0);
		free(ptr);
    }
}