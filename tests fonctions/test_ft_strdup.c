/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:28 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:29 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_strdup_test, string_dup)
{
	char	*str = "Bonjour";

	char	*nb = ft_strdup(str);
	cr_assert_str_eq(nb, str);
}

Test	(ft_strdup_test, empty_string_dup)
{
	char	*str = "";

	char	*nb = ft_strdup(str);
	cr_assert_str_eq(nb, str);
}

Test	(ft_strdup_test, space_dup)
{
	char	*str = " ";

	char	*nb = ft_strdup(str);
	cr_assert_str_eq(nb, str);
}