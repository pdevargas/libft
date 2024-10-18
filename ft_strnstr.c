/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:55:27 by pde-varg          #+#    #+#             */
/*   Updated: 2024/10/18 13:48:33 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;

	x = 0;
	//printf("valor de len %zu \n", len);
	if (!big || !little)
		return (NULL);
	if (ft_strlen(little) == 0 || len < 0)
		return ((char *)big);
	while (x < len && big[x] != '\0')
	{
		if (big[x] == little[0])
		{
			if(len < (x + ft_strlen(little)))
				return (NULL);
			if (ft_strncmp(&big[x], little, ft_strlen(little)) == 0)
			{	
				//printf("valor %c \n", big[x]);
				return ((char *)big + x);
			}
		}
		x++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t	positions;
	char	principal[20] = "aaabcabcd";
	char	secundaria[10] = "ab";

	positions = -1;
	printf("valor devuelto %s \n", ft_strnstr(principal, secundaria,
				positions));
	return (0);
}*/
