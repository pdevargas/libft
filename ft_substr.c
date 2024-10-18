/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:22:39 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/16 19:35:38 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		x;
	size_t	i;
	char	*dest;

	x = start;
	i = 0;
	dest = ft_calloc((len + 1), sizeof(char));
	if (!s || !dest)
		return (NULL);
	while (s[x] != '\0' && i < len)
	{
		dest[i] = s[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
    size_t          pos;
    unsigned int    start;
    const char      src [20] = "Hola_como";
    char            *result;
    
    start = 15;
    pos = 3;
    result = ft_substr(src, start, pos);
    printf("longitud de src %zu \n", ft_strlen(src));
    printf("valor de src %s \n", src);
    printf ("valor devuelto %s \n", result);
    return (0);
}*/