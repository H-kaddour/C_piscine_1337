/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:24:45 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/06 18:11:54 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	rslt;

	i = 1;
	rslt = 1;
	if (power < 0)
		return (0);
	else if (power == 0 )
		return (1);
	while (i <= power)
	{
		rslt *= nb;
		i++;
	}
	return (rslt);
}
