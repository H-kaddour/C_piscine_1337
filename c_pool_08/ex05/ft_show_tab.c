/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:21:39 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/14 16:21:47 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <unistd.h>
void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putnbr(int nb)
{
    if (nb == -2147483648 )
    {
        write(1, "-2147483648", 11);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if (nb >= 0 && nb < 10 )
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
struct s_stock_str  *ft_strs_to_tab(int ac, char **av);
void    ft_show_tab(struct s_stock_str *par)
{
    int i;
    i = 0;
    while (par[i].str != 0)
    {
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}
/*
int main(int argc, char **argv)
{
    if (argc > 1)
    {
        ft_show_tab(ft_strs_to_tab(argc, argv));
        return (0);
    }
}*/

