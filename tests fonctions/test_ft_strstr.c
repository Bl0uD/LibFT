/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:16:08 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:19:58 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_strstr_test, normal_using){
const char *str = "Bonjour les amis";
const char *finder = "les";
void *test;
void *verif;
void *a;
void *b;

test = strdup(str);
verif = strdup(str);
a = ft_strstr(test, finder);
b = strstr(verif, finder);
cr_assert_str_eq(a, b);
}

Test(ft_strstr_test, not_found){
const char *str = "Bonjour les amis";
const char *finder = "z";
void *test;
void *verif;
void *a;
void *b;

test = strdup(str);
verif = strdup(str);
a = ft_strstr(test, finder);
b = strstr(verif, finder);
cr_assert_eq(a, b);
}

Test(ft_strstr_test, no_finder){
const char *str = "Bonjour les amis";
const char *finder = "";
void *test;
void *verif;
void *a;
void *b;

test = strdup(str);
verif = strdup(str);
a = ft_strstr(test, finder);
b = strstr(verif, finder);
cr_assert_str_eq(a, b);
}

Test(ft_strstr_test, no_string){
const char *str = "";
const char *finder = "les";
void *test;
void *verif;
void *a;
void *b;

test = strdup(str);
verif = strdup(str);
a = ft_strstr(test, finder);
b = strstr(verif, finder);
cr_assert_eq(a, b);
}

Test(ft_strstr_test, no_string_no_finder){
const char *str = "";
const char *finder = "";
void *test;
void *verif;
void *a;
void *b;

test = strdup(str);
verif = strdup(str);
a = ft_strstr(test, finder);
b = strstr(verif, finder);
cr_assert_str_eq(a, b);
}
