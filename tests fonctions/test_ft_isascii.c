/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:10:49 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:11:12 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test (ft_isascii_test, zero_ascii_number){
int nb = ft_isascii(48);
cr_assert(nb == 1);
}

Test (ft_isascii_test, min_number){
int nb = ft_isascii(0);
cr_assert(nb == 1);
}

Test (ft_isascii_test, max_number){
int nb = ft_isascii(177);
cr_assert(nb == 0);
}

Test (ft_isascii_test, min_overflow_number){
int nb = ft_isascii(-1);
cr_assert(nb == 0);
}

Test (ft_isascii_test, max_overflow_number){
int nb = ft_isascii(178);
cr_assert(nb == 0);
}