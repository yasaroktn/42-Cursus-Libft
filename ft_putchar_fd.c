/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:00:26 by yokten            #+#    #+#             */
/*   Updated: 2022/12/21 03:00:27 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
int main()
{
    int fd = open("sel.txt", O_RDWR | O_CREAT);
    char c = 'a';
     ft_putchar_fd(c, fd);
    printf("%d", fd);
}*/