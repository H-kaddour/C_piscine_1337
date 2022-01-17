/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 10:49:07 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/02 10:49:15 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_swap(char *a, char *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

char *rev_char(char *str)
{
    int i;
    int j;

    i = 0;
    j = ft_strlen(str) - 1;
    while (i < j)
	{
		ft_swap(&str[i], &str[j]);
		j--;
		i++;
	}
	return (str);
}

int main()
{
    char arr[]="younes";
    printf("%s", rev_char(arr));

    return 0;
}
