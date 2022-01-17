/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:12:28 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/14 16:21:24 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
int ft_strlen(char *str)
{
    int index;
    index = 0;
    while (str[index])
        index++;
    return (index);
}
char    *ft_strdup(char *src)
{
    int     index;
    char    *dest;
    index = 0;
    dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
    if (!dest)
        return (0);
    while (src[index])
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}
struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    int                 index;
    struct s_stock_str  *array;
    array = malloc((ac + 1) * sizeof(struct s_stock_str));
    if (!array)
        return (NULL);
    index = 0;
    while (index < ac)
    {
        array[index].size = ft_strlen(av[index]);
        array[index].str = av[index];
        array[index].copy = ft_strdup(av[index]);
        index++;
    }
    array[index].str = 0;
    array[index].copy = 0;
    return (array);
}
/*
int main(int argc, char **argv)
{
    int                 i;
    struct s_stock_str  *structs;
    structs = ft_strs_to_tab(argc, argv);
    i = 0;
    while (i < argc)
    {
        printf("%d\n", i);
        printf("\t| original : $%s$\t%p\n", structs[i].str, structs[i].str);
        printf("\t|   copied : $%s\t%p\n", structs[i].copy, structs[i].copy);
        printf("\t|     size : %d\n", structs[i].size);
        i++;
    }
}*/

