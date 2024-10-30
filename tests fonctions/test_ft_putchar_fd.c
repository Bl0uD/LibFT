/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:15:05 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:23:06 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

static void redirect_all_stdout(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(ft_putchar_fd_test, one_char, .init=redirect_all_stdout)
{
	ft_putchar_fd(1, 'c');
	ft_putchar_fd(2, 'e');
	cr_assert_stdout_eq_str("c");
	cr_assert_stderr_eq_str("e");
}