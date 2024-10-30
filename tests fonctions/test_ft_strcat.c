/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:15 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:16 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_strcat_test, normal_using)
{
	const	char	*src = "jour";
	const	char	*dest = "Bon";
	char	*res;
	char	*res2;
	size_t	len;

	len = ft_strlen(dest) + ft_strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	ft_strcpy(res, dest);
	ft_strcpy(res2, dest);
	ft_strcat(res, src);
	strcat(res2, src);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strcat_test, empty_dest)
{
	const	char	*src = "jour";
	const	char	*dest = "";
	char	*res;
	char	*res2;
	size_t	len;

	len = ft_strlen(dest) + ft_strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	ft_strcpy(res, dest);
	ft_strcpy(res2, dest);
	ft_strcat(res, src);
	strcat(res2, src);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strcat_test, empty_src)
{
	const	char	*src = "";
	const	char	*dest = "Bon";
	char	*res;
	char	*res2;
	size_t	len;

	len = ft_strlen(dest) + ft_strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	ft_strcpy(res, dest);
	ft_strcpy(res2, dest);
	ft_strcat(res, src);
	strcat(res2, src);
	cr_assert_str_eq(res, res2);
}

Test	(ft_strcat_test, no_src_no_dest)
{
	const	char	*src = "";
	const	char	*dest = "";
	char	*res;
	char	*res2;
	size_t	len;

	len = ft_strlen(dest) + ft_strlen(src) + 1;
	res = malloc(sizeof(char) * len);
	res2 = malloc(sizeof(char) * len);
	ft_strcpy(res, dest);
	ft_strcpy(res2, dest);
	ft_strcat(res, src);
	strcat(res2, src);
	cr_assert_str_eq(res, res2);
}