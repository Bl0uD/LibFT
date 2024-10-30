/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:04:20 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:25:51 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_isalnum_test, normal_positive_ascii_number)
{
	char c = '1';
	int	nb = ft_isalnum(c);

	cr_assert(nb == 1);
}

Test(ft_isalnum_test, normal_positive_number){
int nb = ft_isalnum(57);

cr_assert(nb == 1);
}

Test(ft_isalnum_test, lower_ascii_alpha){
char c = 'a';
int nb = ft_isalnum(c);

cr_assert(nb == 1);
}

Test(ft_isalnum_test, upper_ascii_alpha){
char c = 'A';
int nb = ft_isalnum(c);

cr_assert(nb == 1);
}

Test(ft_isalnum_test, lower_alpha){
int nb = ft_isalnum(172);
cr_assert(nb == 0);
}

Test(ft_isalnum_test, not_an_alphanum){
char c = '*';
int nb = ft_isalnum(c);

cr_assert(nb == 0);
}

Test(ft_isalnum_test, non_printable_char){
char c = '\n';
int nb = ft_isalnum(c);

cr_assert(nb == 0);
}

Test(ft_isalnum_test, zero_number){
int nb = ft_isalnum(0);

cr_assert(nb == 0);
}
