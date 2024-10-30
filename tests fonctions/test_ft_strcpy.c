/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:25 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:22:15 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_strcpy_test, copy)
{
	char	*str = "Bonjour";
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(str) + 1);
	char	*nb = ft_strcpy(dest, str);
	cr_assert_eq(nb, strcpy(dest, str));
}

Test(ft_strcpy_test, no_string)
{
	char	*str = "";
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(str) + 1);
	char	*nb = ft_strcpy(dest, str);
	cr_assert_eq(nb, strcpy(dest, str));
}