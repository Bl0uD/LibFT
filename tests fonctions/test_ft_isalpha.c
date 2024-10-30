/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:09:14 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:10:12 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test (ft_isalpha_test, zero_ascii_number){
int c = 48;
int nb = ft_isalpha(c);

cr_assert(nb == 0);
}

Test (ft_isalpha_test, upper_char_ascii){
int c = 'A';
int nb = ft_isalpha(c);

cr_assert(nb == 1);
}

Test (ft_isalpha_test, zero_number){
int c = 0;
int nb = ft_isalpha(c);

cr_assert(nb == 0);
}

Test (ft_isalpha_test, lower_char_ascii)
{
int c = 'a';
int nb = ft_isalpha(c);

cr_assert(nb == 1);
}
