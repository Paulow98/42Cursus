/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ployola- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:30:20 by ployola-          #+#    #+#             */
/*   Updated: 2021/10/19 12:30:22 by ployola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*tmp1;
	unsigned const char	*tmp2;

	tmp1 = (unsigned const char *)s1;
	tmp2 = (unsigned const char *)s2;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (n > 0)
	{
		if (*tmp1++ != *tmp2++)
			return (*--tmp1 - *--tmp2);
		n--;
	}
	return (0);
}
