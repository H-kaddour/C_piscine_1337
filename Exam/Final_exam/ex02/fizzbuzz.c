/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 06:43:35 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/15 07:09:11 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_number(int number)
{
	if (number > 9)
		ft_number(number/10);
	write(1, &"0123456789"[number % 10],1);
}
int main()
{
	int number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4)
		else
			ft_number(number);
		write(1, "\n", 1);
	}
	return (0);
}
