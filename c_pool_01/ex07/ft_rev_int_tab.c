/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:26:46 by hkaddour          #+#    #+#             */
/*   Updated: 2021/09/28 15:29:13 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	countdown;
	int	countup;

	countup = 0;
	countdown = size - 1;
	while (countup < countdown)
	{
		ft_swap(&tab[countup], &tab[countdown]);
		countdown--;
		countup++;
	}
}
