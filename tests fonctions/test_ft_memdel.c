/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:42 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:14:43 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_memdel_test, basic_memdel)
{
	void *ptr = malloc(10);
	ft_memdel(&ptr);

	cr_assert_null(ptr);
}

Test(ft_memdel_test, null_pointer)
{
    void *ptr = NULL;
    ft_memdel(&ptr);

    cr_assert_null(ptr, "ft_memdel doit laisser le pointeur à NULL si celui-ci est déjà NULL.");
}

Test(ft_memdel_test, memory_is_freed)
{
    void *ptr = malloc(10);
    void *original_ptr = ptr;

    ft_memdel(&ptr);

    cr_assert_null(ptr, "ft_memdel doit mettre le pointeur à NULL après libération.");
    cr_assert_neq(ptr, original_ptr, "L'adresse du pointeur ne doit plus être celle de la mémoire allouée.");
}

typedef struct s_person {
    char *name;
    int age;
} t_person;

Test(ft_memdel_test, free_structure_pointer)
{
    t_person *person = malloc(sizeof(t_person));
    person->name = strdup("John Doe");
    person->age = 30;

    ft_memdel((void**)&person);

    cr_assert_null(person, "ft_memdel doit mettre le pointeur de structure à NULL après libération.");
}

Test(ft_memdel_test, free_dynamic_array)
{
    char **arr = malloc(sizeof(char *) * 5);
    for (int i = 0; i < 5; i++) {
        arr[i] = strdup("Test");
    }

    ft_memdel((void**)&arr);

    cr_assert_null(arr, "ft_memdel doit mettre le tableau alloué dynamiquement à NULL après libération.");
}

Test(ft_memdel_test, free_string)
{
    char *str = strdup("Hello, World!");
    ft_memdel((void**)&str);

    cr_assert_null(str, "ft_memdel doit mettre le pointeur de la chaîne à NULL après libération.");
}

Test(ft_memdel_test, double_pointer_null)
{
    void **ptr = NULL;
    ft_memdel(ptr);

    cr_assert_null(ptr, "ft_memdel ne doit pas planter si on lui passe un double pointeur NULL.");
}

Test(ft_memdel_test, free_already_null_pointer)
{
    void *ptr = NULL;

    ft_memdel(&ptr);
    cr_assert_null(ptr, "ft_memdel doit laisser un pointeur NULL inchangé.");
}

Test(ft_memdel_test, pointer_reuse_after_memdel)
{
    void *ptr = malloc(20);
    ft_memdel(&ptr);

    cr_assert_null(ptr, "ft_memdel doit mettre le pointeur à NULL après libération.");

    ptr = malloc(30);  // Réutilisation du pointeur après libération
    cr_assert_not_null(ptr, "Le pointeur doit pouvoir être réutilisé après libération.");
    free(ptr);
}