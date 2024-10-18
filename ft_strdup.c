/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:39:24 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/16 19:24:22 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	large;
	size_t	x;

	x = 0;
	large = ft_strlen(s);
	new = (char *)ft_calloc(large, sizeof(char));
	if (!new)
		return (NULL);
	while (x < large)
	{
		new[x] = s[x];
		x++;
	}
	return (new);
}
/*
int	main(void)
{
    char cad[20] = "hola como estas";
    char *generada;
    
    generada = ft_strdup(cad);
    printf("Cadena generada %s: \n", generada);
    printf("------------- \n");
    generada = strdup(cad);
    printf("Cadena generada %s: \n", generada);
    return (0);
}*/
