/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:57:39 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/30 12:09:31 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *str)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (str[i] != '\0')
	{
		dest[dest_len + i] = str[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
