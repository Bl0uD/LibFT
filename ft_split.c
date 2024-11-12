/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:10:58 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/12 23:55:59 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	if (str[i - 1] != c)
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc((count_words((char *)s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (k < count_words((char *)s, c) && s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		res[k] = ft_strndup((char *)s + i, j - i);
		k++;
		i = j;
	}
	res[k] = 0;
	return (res);
}
