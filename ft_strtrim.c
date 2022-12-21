/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 02:59:26 by yokten            #+#    #+#             */
/*   Updated: 2022/12/21 04:12:12 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int len;
    char *a ;
    if(!s1 || !set)
        return(0);
    while(*s1 && ft_strchr(set, *s1))
        s1++;
    len = ft_strlen(s1);
    while(s1[len - 1] && len && ft_strchr(set, s1[len - 1]))
        len--;
    a = (char *)malloc((len + 1) * sizeof(char));
    if(!a)
        return(0);
    ft_memcpy(a, s1, (len));
    a[len] = '\0';
    return(a);
}

int main(void)
{
    char    a[] = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
    //char    b[] = "abc";

    printf("%s", ft_strtrim(a, " \n\t"));
}