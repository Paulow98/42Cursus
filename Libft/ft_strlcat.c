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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dst);
	j = destlen;
	i = 0;
	if (destlen < size - 1 && size > 0)
	{
		while (src[i] && destlen + i < size - 1)
		{
			dst[j++] = src[i++];
		}
		dst[j] = 0;
	}
	if (destlen >= size)
		destlen = size;
	return (destlen + srclen);
}
