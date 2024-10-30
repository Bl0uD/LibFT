/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:36:32 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:35:16 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc(sizeof(*res) * (size + 1));
	if (!res)
		return (NULL);
	ft_bzero(res, size + 1);
	return (res);
}
