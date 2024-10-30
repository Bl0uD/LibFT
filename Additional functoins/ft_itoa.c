/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:40:07 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:27:02 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		j;
	int		temp;
	int		signe;

	i = 0;
	temp = n;
	signe = 0;
	if (n == -2147483648)
	{
		res = "-2147483648";
		return (res);
	}
	if (temp == 0)
		i++;
	else if (temp < 0)
	{
		temp *= -1;
		signe = 1;
	}
	while (temp > 0)
	{
		temp /= 10;
		i++;
	}
	if (n < 0)
		temp = n * (-signe);
	else
		temp = n;
	res = (char *)malloc(sizeof(char) * (i + signe + 1));
	if (!res)
		return (NULL);
	if (signe == 1)
	{
		res[0] = '-';
		i++;
	}
	res[i] = '\0';
	j = 1;
	while (i > j - 1 + signe)
	{
		res[i - j] = (temp % 10) + '0';
		temp /= 10;
		j++;
	}
	return (res);
}
/*
int	main()
{
	int		n = -2147483648;
	char	*res = ft_itoa(n);

	printf("resultat = %s\n", res);
}*/