/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 02:59:40 by yokten            #+#    #+#             */
/*   Updated: 2022/12/21 02:59:41 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *a;
    size_t i ;

    if(!s)
        return(0);
    if(start >= ft_strlen(s))
        len = 0;
    if(len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    a = malloc((len + 1) * sizeof(char));
    if(!a)
        return(0);
    i = 0;
    while(s[start] && i < len)
    {
        a[i]= s[start]; 
        start++;
        i++;
    }
    a[i] = '\0';
    return(a);
}
/*
int main()
{
    char *a;

    a = "yasarokten";
    printf("%s",ft_substr(a, 4 , 4));
}*/