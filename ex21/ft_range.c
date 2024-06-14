/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:42:11 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/14 17:12:02 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int		i;
	int					*array;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*dst;
	int 	i;

	dst = ft_range(5, 10);
	i  = 0;
	while (i < 5)
		printf("%d\n", dst[i++]);
	return (0);
}
*/
