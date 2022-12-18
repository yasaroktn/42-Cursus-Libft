/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:46:01 by yokten            #+#    #+#             */
/*   Updated: 2022/12/18 17:15:08 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    long sonuc;

    i = 0;
    sign = 1;
    sonuc = 0;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        sonuc = sonuc * 10 + (str[i] - 48) * sign;
        i++;
    }
    return(sonuc);
}