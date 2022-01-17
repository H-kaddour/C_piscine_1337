/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:43:04 by hkaddour          #+#    #+#             */
/*   Updated: 2021/09/27 11:37:22 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int first, int second);

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_write(first, second);
			second++;
		}
		first++;
	}
}

void	ft_write(int first, int second)
{
	char	f1;
	char	f2;
	char	s1;
	char	s2;

	f1 = first / 10 + '0';
	f2 = first % 10 + '0';
	s1 = second / 10 + '0';
	s2 = second % 10 + '0';
	write(1, &f1, 1);
	write(1, &f2, 1);
	write(1, " ", 1);
	write(1, &s1, 1);
	write(1, &s2, 1);
	if (!(f1 == '9' && f2 == '8' && s1 == '9' && s2 == '9'))
	{
		write(1, ", ", 1);
	}
}
