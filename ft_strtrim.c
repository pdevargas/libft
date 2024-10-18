/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:38:02 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/16 19:26:11 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_recorrecreciente(const char *src, int puntsrc, const char *dest,
		int puntdest)
{
	while (src[puntsrc] != '\0' && dest[puntdest] != '\0')
	{
		if (src[puntsrc] == dest[puntdest])
		{
			puntsrc++;
			puntdest = 0;
		}
		else
			puntdest++;
	}
	return (puntsrc);
}

int	ft_recorredecreciente(const char *src, int puntsrc, const char *dest,
		int puntdest)
{
	while (src[puntsrc] != '\0' && dest[puntdest] != '\0')
	{
		if (src[puntsrc] == dest[puntdest])
		{
			puntsrc--;
			puntdest = 0;
		}
		else
			puntdest++;
	}
	return (puntsrc);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	int		i;
	size_t	posset;
	size_t	large;
	char	*d;

	if (!s1 || !set)
		return (NULL);
	large = ft_strlen(s1) - 1;
	x = 0;
	posset = 0;
	x = ft_recorrecreciente(s1, x, set, posset);
	large = ft_recorredecreciente(s1, large, set, posset);
	i = x;
	d = ft_calloc(((large - x) + 1), sizeof(char));
	if (!d)
		return (NULL);
	while (posset < ((large - x) + 1))
	{
		d[posset] = s1[i];
		i++;
		posset++;
	}
	d[posset] = '\0';
	return (d);
}
/*
int	main(void)
{
	const char	src[20] = "-0-0hola como--0-";
	char		car[5] = "0-";

	printf("valor devuelto %s \n", ft_strtrim(src, car));
    printf("valor de s1: %s \n", s1);
	printf("valor de set: %s \n", set);
	printf("valor de d: %s \n", d);
	return (0);
	// ----------------------------comentarios ---------------------
	// utilizando las dos funciones ya hechas
	// principal = 0;
	// x = 0;
	// while (s1[principal] != '\0' && set[x] != '\0')
	//{
	//		pos = strchr(s1[principal], set[x])
	//		if (pos)
	//		{	
	//			principal++;
	//			x = 0;	
	//		}
	//		else
	//			x++;
	//}
	// final = ft_strlen(s1)
	// detras = final;
	// lo mismo pero desde el final
	// while (s1[principal] != '\0' && set[x] != '\0')
	//{
	//		detras = strchr(s1[final], set[x])
	//		if (detras)
	//		{	
	//			final--;
	//			x = 0;	
	//		}
	//		else
	//			x++;
	//}
	// con strtrim sacamos la cadena desde pos hasta detras. 
	Cogera solo lo del medio
}*/
