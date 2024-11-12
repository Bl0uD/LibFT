/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:16:13 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:18:02 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test(ft_toupper_test, lower){
int c = 'a';

int nb = ft_toupper(c);
cr_assert_eq(nb, toupper(c));
}

Test(ft_toupper_test, upper){
int c = 'A';

int nb = ft_toupper(c);
cr_assert_eq(nb, toupper(c));
}

Test(ft_toupper_test, number){
int c = '0';

int nb = ft_toupper(c);
cr_assert_eq(nb, toupper(c));
}

Test(ft_toupper_test, not_an_alpha){
int c = '-';

int nb = ft_toupper(c);
cr_assert_eq(nb, toupper(c));
}

Test(ft_toupper_test, not_printable){
int c = 12;

int nb = ft_toupper(c);
cr_assert_eq(nb, toupper(c));
}
