/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ployola- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:25:55 by ployola-          #+#    #+#             */
/*   Updated: 2021/10/21 12:25:57 by ployola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char* dst, const char* src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destL;
	size_t	srcL;

	srcL = ft_strlen(src);
	destL = ft_strlen(dst);
	j = destL;
	i = 0;
	if (destL < size - 1 && size > 0)
	{
		while (src[i] && destL + i < size - 1)
		{
			dst[j++] = src[i++];
		}
		dst[j] = 0;
	}
	if (destL >= size)
		destL = size;
	return (destL + srcL);
}

