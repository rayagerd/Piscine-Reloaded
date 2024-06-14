/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:51:15 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/14 12:05:18 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	int result = ft_iterative_factorial(11);
	printf("%d", result);
	return (0);
}
*/
