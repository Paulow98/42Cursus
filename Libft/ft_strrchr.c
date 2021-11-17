/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ployola- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:25:55 by ployola-          #+#    #+#             */
/*   Updated: 2021/10/21 12:25:57 by ployola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char
* ft_strrchr(const char* s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
		i--;
	}
	return (NULL);
}
////////////////////////////////////////
