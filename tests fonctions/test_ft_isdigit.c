/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:11:17 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:11:57 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test (ft_isdigit_test, zero_ascii_number){
int nb = ft_isdigit(48);
cr_assert(nb == 1);
}

Test (ft_isdigit_test, nine_ascii_number){
int nb = ft_isdigit('9');
cr_assert(nb == 1);
}

Test (ft_isdigit_test, zero_number){
int nb = ft_isdigit(0);
cr_assert(nb == 0);
}

Test (ft_isdigit_test, non_digit_parameter){
int nb = ft_isdigit('a');
cr_assert(nb == 0);
}
