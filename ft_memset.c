/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:43:12 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/03 14:11:38 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*d;

	i = 0;
	d = s;
	if (!s)
		return (s);
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	source[20] = "hola";
	int		valor;
	size_t	num;
	size_t	x;

	valor = 70;
	num = 6;
	ft_memset(source, valor, num);
	printf("main \n");
	x = 0;
	while (x <= num)
	{
		printf("%c", source[x]);
		x++;
	}
	return (0);
}*/
