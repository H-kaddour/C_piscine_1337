/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:20:09 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/03 19:20:35 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
void    condi(char *str, int i, int *check)
{
    if ((str[i] >= '0' && str[i] <= '9'))
    {
        *check = 0;
    }
    else
    {
        *check = 1;
    }
}
char    *ft_strcapitalize(char *str)
{
    int c;
    int i;
    c = 1;
    i = 0;
    ft_strlowcase(str);
    while (str[i] != '\0')
    {
        if (c == 1 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            c = 0;
        }
        else if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            condi(str, i, &c);
        }
        i++;
    }
    return (str);
}

