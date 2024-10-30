/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:19 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:20 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_strchr_test, found)
{
	char	*str = "Bonjour";
	int		c = 'n';

	char	*nb = ft_strchr(str, c);
	cr_assert_eq(nb, strchr(str, c));
}

Test	(ft_strchr_test, last_char)
{
	char	*str = "Bonjour";
	int		c = '\0';

	char	*nb = ft_strchr(str, c);
	cr_assert_eq(nb, strchr(str, c));
}

Test	(ft_strchr_test, not_found)
{
	char	*str = "Bonjour";
	int		c = 'z';

	char	*nb = ft_strchr(str, c);
	cr_assert_eq(nb, strchr(str, c));
}