/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 11:56:25 by dgomez            #+#    #+#             */
/*   Updated: 2019/10/12 16:52:56 by dgomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_rush(char *str)
{
	int		i;
	char	number_of_chars;

	number_of_chars = 0;
	i = 0;
	while (str[i])
	{
		if(str[i] > 48 && str[i] < 53 )
		{
			number_of_chars++;
		}	
		i++;
	}
	return (number_of_chars);
}


int	main()
{
	int x;
	x = ft_rush("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2");
	printf("%d", x);
}

