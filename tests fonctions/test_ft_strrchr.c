/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:16:05 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:23:44 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include <string.h>
#include "../libft.h"
#include <criterion/criterion.h>

Test (ft_strrchr_test, normal_using){
const char *str = "Bonjour les amis";
char *test;
char *verif;
char *a;
char *b;
int c = 'a';

test = strdup(str);
verif = strdup(str);
a = ft_strrchr(test, c);
b = strrchr(verif, c);
cr_assert_str_eq(a, b);
}

Test (ft_strrchr_test, not_found){
const char *str = "Bonjour les amis";
char *test;
char *verif;
char *a;
char *b;
int c = 'z';

test = strdup(str);
verif = strdup(str);
a = ft_strrchr(test, c);
b = strrchr(verif, c);
cr_assert_eq(a, b);;
}

Test (ft_strrchr_test, multiple_apparition_of_char){
const char *str = "Bonjour les amis";
char *test;
char *verif;
char *a;
char *b;
int c = 'o';

test = strdup(str);
verif = strdup(str);
a = ft_strrchr(test, c);
b = strrchr(verif, c);
cr_assert_str_eq(a, b);
}

Test (ft_strrchr_test, empty_string){
const char *str = "";
char *test;
char *verif;
char *a;
char *b;
int c = 'a';

test = strdup(str);
verif = strdup(str);
a = ft_strrchr(test, c);
b = strrchr(verif, c);
cr_assert_null(a);
cr_assert_null(b);
}

Test (ft_strrchr_test, special_characters){
const char *str = "He@llo Wo!rld";
char *test;
char *verif;
char *a;
char *b;
int c = '!';

test = strdup(str);
verif = strdup(str);
a = ft_strrchr(test, c);
b = strrchr(verif, c);
cr_assert_str_eq(a, b);
}

Test (ft_strrchr_test, search_for_digit){
const char *str = "Hello 123 456";
char *test;
char *verif;
char *a;
char *b;
int c = '3';

test = strdup(str);
verif = strdup(str);
a = ft_strrchr(test, c);
b = strrchr(verif, c);
cr_assert_str_eq(a, b);
}

Test (ft_strrchr_test, search_for_space){
const char	*str = "Hello 123 456";
char *test;
char *verif;
char *a;
char *b;
int	 c = ' ';

test = strdup(str);
verif = strdup(str);
a = ft_strrchr(test, c);
b = strrchr(verif, c);
cr_assert_str_eq(a, b);
}
