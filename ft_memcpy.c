/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:59:10 by yokten            #+#    #+#             */
/*   Updated: 2022/12/12 19:01:19 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t		i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	
	if (n == 0 || dst == src)
		return (dst);
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	const char	src[] = "yasar";
	char	dest[5];
	size_t n = 3;
	printf("Değer: %s", ft_memcpy(dest, src, n));
}*/