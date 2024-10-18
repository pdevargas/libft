/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo.devargas <pablo.devargas@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:41:12 by pde-varg          #+#    #+#             */
/*   Updated: 2024/09/26 13:49:56 by pablo.devar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	num;

	num = 15;
	if (ft_isascii(num))
	{
		printf(" %c es un ascii \n", num);
	}
	else
	{
		printf(" %c No es un ascii \n", num);
	}
	return (0);
}*/