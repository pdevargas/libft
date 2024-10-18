/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdv <pdv@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:28:25 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/07 19:40:13 by pdv              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*mem;

	if (nelem * size > ULONG_MAX)
		return (NULL);
	mem = malloc(nelem * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nelem);
	return (mem);
}
/*
int	main(void)
{
	size_t x;
	size_t elementos;
	size_t tipo;
	int *pos;

	elementos = 10;
	x = 0;
	tipo = sizeof(int);
	pos = (int *)ft_calloc(elementos, tipo);
	printf("valor devuelto %p \n", pos);
	while (x < elementos)
	{
		printf("posicion x =  %zu valor devuelto %d \n", x, pos[x]);
		x++;
	}

	pos = (int *)calloc(elementos, tipo);
	printf("-----------%p \n", pos);
	x = 0;
	while (x < elementos)
	{
		printf("posicion x =  %zu valor devuelto %d \n", x, pos[x]);
		x++;
	}
	return (0);
}*/