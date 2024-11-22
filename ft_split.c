/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:10:58 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/22 18:17:03 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, int c)
{
	int	i;
	int	j;
	int	in;

	i = 0;
	j = 0;
	in = 0;
	while (s[i])
	{
		if (s[i] != (char)c && in != 1)
		{
			in = 1;
			j++;
		}
		if (s[i] == (char)c && in == 1)
			in = 0;
		i++;
	}
	return (j);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		s;
	int		e;
	char	**dst;

	if (!str)
		return (NULL);
	dst = (char **)malloc(sizeof(char *) * (ft_countwords(str, (int)c) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	s = 0;
	while (str[s] && i < ft_countwords(str, (int)c))
	{
		while (str[s] == c && str[s])
			s++;
		e = s;
		while (str[e] != c && str[e])
			e++;
		dst[i] = ft_strndup(str + s, e - s);
		s = e;
		i++;
	}
	dst[i] = 0;
	return (dst);
}
