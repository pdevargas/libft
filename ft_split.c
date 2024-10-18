/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:48:17 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/16 19:41:40 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	ft_cuenta(const char *cadena, char caracter)
{
	int	x;
	int	cont;

	cont = 0;
	x = 0;
	while (cadena[x] != '\0')
	{
		if (cadena[x] == caracter)
			x++;
		else
		{
			while(cadena[x] != '\0' && cadena[x] != caracter)
				x++;
			cont++;
		}
	}
	return (cont);
}

void	free_split(char **d)
{
	int x;
	
	x = 0;
	while (d[x] != NULL)
	{
		free(d[x]);
		x++;
	}
	free(d);
}


char	**ft_split(char const *s, char c)
{
	int			i;
	int			start;
	int			pos;
	char		**dest;
	
	dest = (char **)ft_calloc(ft_cuenta(s, c) + 1, sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	pos = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while(s[i] != '\0' && s[i] != c)
				i++;
			dest[pos] = ft_substr(s, start, i - start);
			if(!dest[pos])
				return (NULL);
			pos++;
		}
	}
	return (dest);
}

/* 
int	main(void)
{
	int x;
	char **d;

	x = 0;
	d = ft_split("XHolaXcomoXestas", 'X');
	//imprimimos
	while (d[x] != NULL)
	{
		printf("cadena %s \n", d[x]);
		x++;
	}

	//Liberamos
	free_split(d);
	return (0);
} */


// Comentar por bloque --> seleccionas antes, ctrl + shift + A
// Comentar por lineas --> seleccionas antes, ctrl + shift + 7 == ctrl + /

