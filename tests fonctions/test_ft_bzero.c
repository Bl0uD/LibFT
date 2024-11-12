/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:04:15 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/08 22:10:41 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <criterion/criterion.h>

Test(ft_bzero_test, basic_zeroing)
{
	char str[] = "Hello World";
	size_t n = 5;

	ft_bzero(str, n);

	for (size_t i = 0; i < n; i++)
	{
		cr_assert_eq(str[i], 0, "L'octet à l'index %zu doit être 0.", i);
	}
	cr_assert_str_eq(&str[n], " World", "Les octets après les %zu premiers doivent rester inchangés.", n);
}

Test(ft_bzero_test, zero_entire_buffer)
{
	char str[] = "Bonjour";
	size_t n = sizeof(str);

	ft_bzero(str, n);

	for (size_t i = 0; i < n; i++)
	{
		cr_assert_eq(str[i], 0, "L'octet à l'index %zu doit être 0.", i);
	}
}

Test(ft_bzero_test, zero_length)
{
	char str[] = "Hello World";
	size_t n = 0;

	ft_bzero(str, n);

	cr_assert_str_eq(str, "Hello World", "La chaîne ne doit pas être modifiée si n = 0.");
}

Test(ft_bzero_test, already_zeroed)
{
	char str[10] = {0};
	size_t n = sizeof(str);

	ft_bzero(str, n);

	for (size_t i = 0; i < n; i++)
	{
		cr_assert_eq(str[i], 0, "L'octet à l'index %zu doit rester 0.", i);
	}
}

Test(ft_bzero_test, single_byte)
{
	char str[1] = {'A'};
	size_t n = 1;

	ft_bzero(str, n);

	cr_assert_eq(str[0], 0, "L'unique octet du tableau doit être mis à 0.");
}

Test(ft_bzero_test, special_characters)
{
	char str[] = "@!$%^&*";
	size_t n = 3;

	ft_bzero(str, n);

	for (size_t i = 0; i < n; i++)
	{
		cr_assert_eq(str[i], 0, "L'octet à l'index %zu doit être 0.", i);
	}
	cr_assert_str_eq(&str[n], "%^&*", "Les octets après les 3 premiers doivent rester inchangés.");
}

Test(ft_bzero_test, numeric_characters)
{
	char str[] = "1234567890";
	size_t n = 4;

	ft_bzero(str, n);

	for (size_t i = 0; i < n; i++)
	{
		cr_assert_eq(str[i], 0, "L'octet à l'index %zu doit être 0.", i);
	}
	cr_assert_str_eq(&str[n], "567890", "Les octets après les 4 premiers doivent rester inchangés.");
}

typedef struct s_person
{
	char name[20];
	int age;
} t_person;

Test(ft_bzero_test, zeroing_struct)
{
	t_person person = {"John Doe", 30};
	size_t n = sizeof(person);

	ft_bzero(&person, n);

	for (size_t i = 0; i < sizeof(person.name); i++)
	{
		cr_assert_eq(person.name[i], 0, "L'octet %zu dans 'name' doit être 0.", i);
	}
	cr_assert_eq(person.age, 0, "Le champ 'age' doit être mis à 0.");
}