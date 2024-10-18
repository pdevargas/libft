/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo.devargas <pablo.devargas@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:46:00 by pde-varg          #+#    #+#             */
/*   Updated: 2024/09/26 13:49:48 by pablo.devar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	num;

	num = 'h';
	if (ft_isprint(num))
	{
		printf(" %c es un caracter imprimible \n", num);
	}
	else
	{
		printf(" %c No es un caracter imprimible \n", num);
	}
	return (0);
}*/