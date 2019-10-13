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

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str);

char	ft_rush(char *str)
{
	int permutations [24][4];
	
	permutations = {
	{1,2,3,4}, {1,2,4,3}, {1,3,2,4}, {1,3,4,2}, {1,4,2,3}, {1,4,3,2},
	{2,1,3,4}, {2,1,4,3}, {2,3,1,4}, {2,3,4,1}, {2,4,1,3}, {2,4,3,1},
	{3,1,2,4}, {3,1,4,2}, {3,2,1,4}, {3,2,4,1}, {3,4,1,2}, {3,4,2,1},
	{4,1,2,3}, {4,1,3,2}, {4,2,1,3}, {4,2,3,1}, {4,3,1,2}, {4,3,2,1}
	};




int	main(int argc, char *argv[])
{
	char *buffer;

	buffer = malloc(ft_strlen(argv[1])+1);
	if (argc != 2 || ft_checkargv(argv[1]) == 1 || ft_strlen(argv[1] != 30)
	{
		write(1, "Error\n", 6);
		free(buffer);
		return (1);
	}
	ft_rush(buffer);
	free(buffer);
	return (1);
}
int	ft_checkargv(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if(n % 2 == 0 && (str[n] < '1' || str[n] > '4')) 
		return (1); 
		if(n % 2 != 0 && str[n] != 32)
		return (1);
	}
	return (0);
}
