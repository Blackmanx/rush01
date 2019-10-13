
#include <unistd.h>
#include <stdlib.h>

int	ft_strnumlen(char *str)
{	
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= '1' && str[i] <= '4')
		{
			n++;
		}   
		i++;
	}
	return (n);
}

int	ft_strlen(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
