/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:43:24 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/11 12:46:59 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
	{
		return (0);
	}
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}
/*
int	main(void)
{
	int	n;

	n = 5;
	printf("caso 4: %d	%d\n", n, ft_sqrt(n));
	n = 9;
	printf("caso 4: %d	%d\n", n, ft_sqrt(n));
	return (0);
}
*/
