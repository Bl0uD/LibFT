/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:34 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:15:38 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test	(ft_strlen_test, normal_using)
{
	char	*str = "Bonjour";

	int		nb = ft_strlen(str);
	cr_assert_eq(nb, strlen(str));
}

Test	(ft_strlen_test, no_string)
{
	char	*str = "";

	int		nb = ft_strlen(str);
	cr_assert_eq(nb, strlen(str));
}