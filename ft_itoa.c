/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:54:40 by pdv               #+#    #+#             */
/*   Updated: 2024/10/16 19:26:52 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_reverso(char *cad, int n)
{
	int		x;
	int		i;
	char	*temp;

	(void)n;
	temp = malloc(ft_strlen(cad) * sizeof(char));
	x = 0;
	i = ft_strlen(cad) - 1;
	while (i >= 0)
	{
		temp[x] = cad[i];
		x++;
		i--;
	}
	temp[x] = '\0';
	return (temp);
}

char	*ft_itoa(int n)
{
	int		x;
	int		num;
	char	cad[50];
	char	*d;

	x = 0;
	num = n;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		cad[x] = (n % 10) + '0';
		n = n / 10;
		x++;
	}
	if (num < 0)
	{
		cad[x] = '-';
		x++;
	}
	cad[x] = '\0';
	d = ft_reverso(cad, num);
	return (d);
}
/*
int	main(void)
{
    int     i;

    i = -255;
    printf("-------main ----------- \n");
    printf("valor int %d \n", i);
    printf("cadena devuelta %s \n", ft_itoa(i));
    return(0);
}*/
