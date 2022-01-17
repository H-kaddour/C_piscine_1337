/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:11:16 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/13 19:15:17 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		range[0][i] = min++;
		i++;
	}
	return (size);
}
