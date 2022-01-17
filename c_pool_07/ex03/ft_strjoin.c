/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:43:35 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/13 19:17:12 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	ft_len(int size, int sep, char **str)
{
	int	len;
	int	i;

	len = sep * (size - 1);
	i = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*ptr;

	if (size == 0)
	{
		ptr = malloc(1);
		return (ptr);
	}
	len = ft_len(size, ft_strlen(sep), strs);
	ptr = malloc(sizeof(char) * (len + 1));
	i = -1;
	while (++i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		if (i + 1 < size)
			ptr = ft_strcpy(ptr, sep);
	}
	*ptr = '\0';
	return (ptr - len);
}
