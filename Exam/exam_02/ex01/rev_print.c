/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:02:09 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/08 15:38:43 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_rev_print(char *str)
{
	int i;

	i =  ft_strlen(str) - 1;
	while (i >= 0)
	{
		write(1, &str[i],1);
		i--;
	}
	return (str);
}
int main()
{
	char arr[]="hicham";
	ft_rev_print(arr);

	return (0);
}
