/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:20:30 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/18 15:17:43 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int es_signo(const char *src)
{
	int		x;
	int 	cont;

	x = 0;
	cont = 0;
	while(src[x] != '\0')
	{
		if(src[x] == '-' || src[x] == '+')
			cont++;
		x++;
	}
	if(cont > 1)
		return(-1);
	return (cont);
}
int	ft_large(const char *src)
{
	int	x;

	x = 0;

	while(src[x] != '\0')
		
	while ((src[x] != '\0' && (src[x] >= '0' && src[x] <= '9')) || src[x] == '-' || src[x] == '+')
	{
		x++;
	}
	return (x);
}

int	ft_elevar(int x)
{
	int	num;
	int	i;

	num = 1;
	i = 0;
	while (i < x)
	{
		num = num * 10;
		i++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	x;
	int	large;

	num = 0;
	x = 0;
	if (!str)
		return (0);
	if (es_signo(str) == -1)
		return(0);
	large = ft_large(str) - 1;
	while (str[x] != '\0' && large >= 0)
	{
		if(str[x] != '-' && str[x] != '+')
		{
			if (large == 0)
				num = num + (str[x] - '0');
			else
				num = num + (ft_elevar(large) * (str[x] - '0'));
		}
		x++;
		large--;
	}
	if(str[0] == '-')
		return (-num);
	return (num);
}
/*
int	main(void)
{
	char	var[20] = "-12003";

	printf("\n valor devuelto: %d \n", ft_atoi(var));
	printf("\n --------------- \n");
	printf("\n valor devuelto funcion atoi: %d \n", atoi(var));
	return (0);
}*/
