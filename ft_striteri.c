/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:52:40 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/15 18:56:37 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

	x = 0;
	while (s[x] != '\n')
	{
		f(x, &s[x]);
		x++;
	}
}
/*
int	main(void)
{
    char    s1 = "hola";

    ft_striteri(s1);
    printf("valor devuelto %s \n", s1);
    return(0);
}*/