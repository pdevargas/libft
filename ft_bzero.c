/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:06:32 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/03 13:39:30 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	if (!s)
		return ;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	s[20] = "hola";
	size_t	x;
	size_t	cont;

	x = 4;
	cont = 0;
	ft_bzero(s, x);
	while (cont < x)
	{
		printf("valor : %c \n", s[cont]);
		cont++;
	}
	return (0);
}*/