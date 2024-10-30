/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:40:08 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:26:19 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_atoi_test, normal_positive_number){
int nb = ft_atoi("123");
cr_assert_eq(nb, atoi("123"));
}

Test(ft_atoi_test, normal_negative_number){
int nb = ft_atoi("-123");
cr_assert_eq(nb, atoi("-123"));
}

Test(ft_atoi_test, normal_zero_number){
int nb = ft_atoi("0");
cr_assert_eq(nb, atoi("0"));
}

Test(ft_atoi_test, normal_negative_zero_number){
int nb = ft_atoi("-0");
cr_assert_eq(nb, atoi("-0"));
}

Test(ft_atoi_test, int_min_number){
int nb = ft_atoi("-2147483648");
cr_assert_eq(nb, atoi("-2147483648"));
}

Test(ft_atoi_test, int_max_number){
int nb = ft_atoi("2147483647");
cr_assert_eq(nb, atoi("2147483647"));
}

Test(ft_atoi_test, double_negative_number){
int nb = ft_atoi("--123");
cr_assert_eq(nb, atoi("--123"));
}

Test(ft_atoi_test, double_positive_number){
int nb = ft_atoi("++123");
cr_assert_eq(nb, atoi("++123"));
}

Test(ft_atoi_test, double_sign_number){
int nb = ft_atoi("+-123");
cr_assert_eq(nb, atoi("+-123"));
}

Test(ft_atoi_test, normal_alpha_number){
int nb = ft_atoi("123abc");
cr_assert_eq(nb, atoi("123abc"));
}

Test(ft_atoi_test, empty_number){
int nb = ft_atoi("");
cr_assert_eq(nb, atoi(""));
}

Test(ft_atoi_test, space_number){
int nb = ft_atoi("  ");
cr_assert_eq(nb, atoi("  "));
}

Test(ft_atoi_test, space_before_number){
int nb = ft_atoi("   123");
cr_assert_eq(nb, atoi("   123"));
}

Test(ft_atoi_test, sign_after_number){
int nb = ft_atoi("12-3");
cr_assert_eq(nb, atoi("12-3"));
}

Test(ft_atoi_test, alpha_after_number){
int nb = ft_atoi("12a3");
cr_assert_eq(nb, atoi("12a3"));
}
