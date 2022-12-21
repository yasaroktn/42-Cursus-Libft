/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:00:17 by yokten            #+#    #+#             */
/*   Updated: 2022/12/21 03:00:18 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if(!s)
        return;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
/*
int main()
{
    int fd = open("sel.txt", O_RDWR | O_CREAT);
    ft_putstr_fd("yasar", fd);
    printf("%d", fd);
}*/