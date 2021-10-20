/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ployola- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:07:09 by ployola-          #+#    #+#             */
/*   Updated: 2021/10/18 11:08:12 by ployola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	getnumber(const char *str, int index)
{
	int	n;
	int	i;
	int	i2;
	int	p;

	n = 0;
	p = 1;
	i = index;
	i2 = index;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	while (i > i2)
	{
		n += (str[i - 1] - '0') * p;
		p *= 10;
		i--;
	}
	return (n);
}

static int	isvalid(char c)
{
	if (c == ' ' || c == '\t' || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	ispositive;
	int	index;

	num = 0;
	ispositive = 1;
	index = 0;
	while (isvalid(str[index]))
	{
		if (ispositive < 0)
			return (0);
		if (str[index] == '-')
			ispositive *= -1;
		index++;
	}
	return (getnumber(str, index) * ispositive);
}

//int main()
//{
//	char a[] = " 99999999";
//	printf("String: %s /// Number: %d \n", a, atoi(a));
//	printf("String2: %s / Number2: %d\n", a, ft_atoi(a));
//}