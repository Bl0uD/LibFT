/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:16 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:14:17 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <limits.h>

Test(ft_itoa_test, positive_number)
{
    int		num = 12345;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "12345");
    free(result);
}

Test(ft_itoa_test, negative_number)
{
    int		num = -12345;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "-12345");
    free(result);
}

Test(ft_itoa_test, zero)
{
    int		num = 0;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "0");
    free(result);
}

Test(ft_itoa_test, int_min)
{
    int		num = INT_MIN;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "-2147483648");
}

Test(ft_itoa_test, int_max)
{
    int		num = INT_MAX;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "2147483647");
    free(result);
}

Test(ft_itoa_test, single_digit)
{
    int		num = 7;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "7");
    free(result);
}

Test(ft_itoa_test, single_negative_digit)
{
    int		num = -8;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "-8");
    free(result);
}

Test(ft_itoa_test, two_digit_number)
{
    int		num = 42;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "42",);
    free(result);
}

Test(ft_itoa_test, negative_two_digit_number)
{
    int		num = -99;
    char	*result = ft_itoa(num);

    cr_assert_str_eq(result, "-99");
    free(result);
}

Test(ft_itoa_test, check_allocated_memory)
{
    int		num = 123456789;
    char	*result = ft_itoa(num);

    cr_assert_eq(result[9], '\0');
    free(result);
}