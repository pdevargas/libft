#include "libft.h"

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

int	main(void)
{
	int x;
	char **d;

	x = 0;
	d = ft_split("XHolaXcomoXestasXXXXXXA", 'X');
	//imprimimos
	while (d[x] != NULL)
	{
		printf("cadena %s \n", d[x]);
		x++;
	}

	//Liberamos
	free_split(d);
	return (0);
}