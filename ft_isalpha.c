/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:22:10 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/01 17:46:14 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	num;

	num = '0';
	if (ft_isalpha(num))
	{
		printf(" %c es un caracter \n", num);
	}
	else
	{
		printf(" %c No es un caracter \n", num);
	}
	return (0);
}*/
