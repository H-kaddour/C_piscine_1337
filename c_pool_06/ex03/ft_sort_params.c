/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:00:48 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/14 08:51:27 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
	}
	return (0);
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	ac--;
	while (i < ac)
	{
		j = i + 1;
		while (j <= ac)
		{
			if (ft_strcmp(&av[i][0], &av[j][0]) == 1)
			{
				swap = &av[i][0];
				av[i] = &av[j][0];
				av[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	ft_sort_params(ac, av);
	i = 1;
	if (ac >= 2)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
