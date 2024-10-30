/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:32 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:24:23 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_memchr_test, basic_found)
{
	const void	*src = "Bonjour les amis";
	void		*s;
	void		*test;
	int			c = 'l';
	size_t		n = strlen(src);
	
	s = ft_memchr(src, c, n);
	test = memchr(src, c, n);
	cr_assert_eq(s, test);
}

Test(ft_memchr_test, search_not_successful)
{
	const void	*src = "Bonjour les amis";
	void		*s;
	void		*test;
	int			c = 'z';
	size_t		n = strlen(src);
	
	s = ft_memchr(src, c, n);
	test = memchr(src, c, n);
	cr_assert_eq(s, test);
}

Test(ft_memchr_test, zero_length)
{
	const void	*src = "Bonjour les amis";
	void		*s;
	void		*test;
	int			c = 'l';
	size_t		n = 0;
	
	s = ft_memchr(src, c, n);
	test = memchr(src, c, n);
	cr_assert_eq(s, test);
}

Test(ft_memchr_test, find_null_char)
{
	const void	*src = "Bonjour\0les amis";
	void	*s;
	void	*test;
	int		c = '\0';
	size_t		n = strlen(src);
	
	s = ft_memchr(src, c, n);
	test = memchr(src, c, n);
	cr_assert_eq(s, test);
}

Test(ft_memchr_test, n_smaller_than_char_position)
{
	const void	*src = "Bonjour les amis";
	void	*s;
	void	*test;
	int		c = 'l';
	size_t	n = 5;
	
	s = ft_memchr(src, c, n);
	test = memchr(src, c, n);
	cr_assert_eq(s, test);
}

Test(ft_memchr_test, found_at_last_position)
{
	const void	*src = "Bonjour les amis";
	void	*s;
	void	*test;
	int		c = 's';
	size_t	n = 5;
	
	s = ft_memchr(src, c, n);
	test = memchr(src, c, n);
	cr_assert_eq(s, test);
}