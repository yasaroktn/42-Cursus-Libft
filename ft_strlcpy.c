/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:40:10 by yokten            #+#    #+#             */
/*   Updated: 2022/12/13 19:03:28 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
 {
    size_t i;
    size_t len;
    i = 0;

    if (!src || !dstsize)
        return (ft_strlen(src));
    len = ft_strlen(src);
    while(i < dstsize - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(ft_strlen(src));
 }
 