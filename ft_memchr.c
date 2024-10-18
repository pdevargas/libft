/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:20:35 by pablo.devar       #+#    #+#             */
/*   Updated: 2024/10/16 20:21:23 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		x;
	const char	*o;

	o = s;
	x = 0;
	if (!s || n == 0)
	{
		return (NULL);
	}
	else
	{
		while (x < n)
		{
			if (o[x] == (char)c)
			{
				return ((void *)&o[x]);
			}
			x++;
		}
		return (NULL);
	}
}
/*
int	main(void)
{
	// int i;
    // int x;
    // char	source[20] = "hola como estas";
	// size_t	z;
    // void *res;

    // z = 97;
    // res = ft_memchr(source, z, sizeof(source));
	// printf("main \n");
    // printf("valor devuelto %p \n", res);
    // printf("------------- \n");
    // res = memchr(source, z, sizeof(source));
	// printf("valor devuelto funcion original %p \n", res);
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	if (ft_memchr(s, 0, 1) == s)
		printf("ok\n");
	else
		printf("ko\n");
	return (0);
}*/