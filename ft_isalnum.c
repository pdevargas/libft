/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo.devargas <pablo.devargas@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:32:26 by pde-varg          #+#    #+#             */
/*   Updated: 2024/09/26 13:50:04 by pablo.devar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0'
			&& c <= '9'))
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
	if (ft_isalnum(num))
	{
		printf(" %c es alfanumerico \n", num);
	}
	else
	{
		printf(" %c No es alfanumerico \n", num);
	}
	return (0);
}*/
