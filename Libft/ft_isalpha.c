/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ployola- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:09:24 by ployola-          #+#    #+#             */
/*   Updated: 2021/10/18 11:09:27 by ployola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (1);
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (1);
	return (0);
}
