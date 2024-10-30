/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:59:20 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 19:59:52 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *str, size_t size)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_len = (size_t)ft_strlen(dest);
	if (size <= (size_t)ft_strlen(dest))
		return ((size_t)ft_strlen(str) + size);
	while (str[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = str[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + (size_t)ft_strlen(str));
}
