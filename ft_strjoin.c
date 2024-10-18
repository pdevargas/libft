/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:15:07 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/16 19:24:54 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	int		i;
	size_t	elements;
	char	*dest;

	x = 0;
	i = 0;
	elements = ft_strlen(s1) + ft_strlen(s2);
	dest = ft_calloc(elements, sizeof(char));
	if (!s1 || !s2 || !dest)
		return (NULL);
	while (x < ft_strlen(s1))
	{
		dest[x] = s1[x];
		x++;
	}
	while (x < ft_strlen(s1) + ft_strlen(s2))
	{
		dest[x] = s2[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
    const char  s1[20] = "Hola ";
    const char  s2[20] = "como estas";
    char        *d;

    d = ft_strjoin(s1, s2);
    printf("cadena s1: %s \n", s1);
    printf("cadena s2: %s \n", s2);
    printf("------------------");
    printf("cadena devuelta: %s \n", d);
    return (0);
}*/