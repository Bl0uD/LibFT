/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:16:20 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:17:04 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test (ft_tolower_test, lower){
int c = 'a';

int	nb = ft_tolower(c);
cr_assert_eq(nb, tolower(c));
}

Test (ft_tolower_test, upper){
int c = 'A';

int	nb = ft_tolower(c);
cr_assert_eq(nb, tolower(c));
}

Test (ft_tolower_test, number){
int c = '0';

int	nb = ft_tolower(c);
cr_assert_eq(nb, tolower(c));
}

Test (ft_tolower_test, not_an_alpha){
int c = '-';

int	nb = ft_tolower(c);
cr_assert_eq(nb, tolower(c));
}

Test (ft_tolower_test, not_printable){
int c = 12;

int	nb = ft_tolower(c);
cr_assert_eq(nb, tolower(c));
}
