/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 03:00:20 by yokten            #+#    #+#             */
/*   Updated: 2022/12/24 04:19:47 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if(n < 0)
    {
        write(fd, "-", 1);
        n = n * -1;
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else if (n < 10)
        ft_putchar_fd(n + '0', fd);
}
/*
int main()
{
    int fd = open("sel.txt", O_RDWR | O_CREAT);
    ft_putnbr_fd(-3423, fd);
    printf("%d", fd);
}*/