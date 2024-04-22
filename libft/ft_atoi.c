/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <ekoubbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:27:34 by ekoubbi           #+#    #+#             */
/*   Updated: 2024/03/23 16:18:57 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *nptr)
{
	int		i;
	int		j;
	long	k;

	i = 0;
	j = 1;
	k = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		j *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	if (nptr[i] < '0' || nptr[i] > '9')
		return(LONG_MAX);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		k = k * 10 + nptr[i] - '0';
		if (k * j < INT_MIN || k * j > INT_MAX)
			return (LONG_MAX);
		i++;
	}
	if (nptr[i] != 0)
		return(LONG_MAX);
	return (j * k);
}
