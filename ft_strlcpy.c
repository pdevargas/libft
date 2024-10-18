/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:38:01 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/17 12:18:05 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*o;
	size_t		i;

	i = 0;
	o = src;
	if (!src || !dest)
		return (0);
	if(size != 0)
	{
		while ((i < size - 1) && o[i] != '\0')
		{
			dest[i] = o[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char source[20] = "hola como estas";
	char destination[7];
	size_t x;
	size_t cont;
	size_t vlong;

	x = sizeof(destination);
	cont = 0;
	printf("valor de x %zu \n", x);
	printf("cadena src main: %s \n", source);
	vlong = ft_strlcpy(destination, source, sizeof(destination));
	printf("main \n");
	printf("valor devuelto %zu \n", vlong);
	while (cont < x)
	{
		printf("%c", source[cont]);
		printf("%c \n", destination[cont]);
		cont++;
	}
	return (0);
}*/