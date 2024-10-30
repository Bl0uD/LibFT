/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:13:42 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:13:43 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>
#include <ctype.h>

Test (ft_isspace_test, min_sapce_char){
int c = '\t';
int nb = ft_isspace(c);

cr_assert(nb == 1);
}

Test (ft_isspace_test, max_sapce_char){
int c = '\r';
int nb = ft_isspace(c);

cr_assert(nb == 1);
}

Test (ft_isspace_test, sapce_ascii){
int c = ' ';
int nb = ft_isspace(c);

cr_assert(nb == 1);
}

Test (ft_isspace_test, no_space_ascii){
int c = 'a';
int nb = ft_isspace(c);

cr_assert(nb == 0);
}
