/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo.devargas <pablo.devargas@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:28:08 by pde-varg          #+#    #+#             */
/*   Updated: 2024/09/26 13:50:13 by pablo.devar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	int	num;

	num = '2';
	if (ft_isdigit(num))
	{
		printf(" %c es un digito \n", num);
	}
	else
	{
		printf(" %c No es un digito \n", num);
	}
	return (0);
}*/