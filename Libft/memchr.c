/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ployola- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:30:06 by ployola-          #+#    #+#             */
/*   Updated: 2021/10/19 12:30:12 by ployola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	while (s && i++ < n)
	{
		if (*(unsigned char *)s++ == c)
			return (--s);
	}
	return (NULL);
}

//int main () {
//   const char str[] = "testando";
//   const char ch = 'n';
//   char *ret;

//   ret = ft_memchr(str, ch, 6);

//   printf("String after |%c| is - |%s|\n", ch, ret);

//   return(0);
//}