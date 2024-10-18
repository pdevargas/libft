/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:55:27 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/15 19:29:08 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int     x;
    char    *d;

    x = 0;
    d = ft_itoa(n);
    while (d[x] != '\0')
    {
        write(fd, &d[x], 1);
        x++;
    }
}
/*
int main(void)
{
    int num;

    num = -254125;
    ft_putnbr_fd(num, 1);
    return(0);
}*/