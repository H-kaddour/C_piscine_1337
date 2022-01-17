/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:49:37 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/07 10:12:49 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rslt;

	i = 1;
	rslt = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		rslt *= i;
		i++;
	}
	return (rslt);
}
