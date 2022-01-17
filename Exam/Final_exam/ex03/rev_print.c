/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 07:09:31 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/15 07:18:03 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_rev_print (char *str)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	i--;
	return (str);
}

int main()
{
	char str[]="hicham";
	ft_rev_print(str);
	return (0);
}
