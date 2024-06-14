/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:21:17 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/14 15:29:20 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		{
			counter++;
		}
		i++;
	}
	return (counter);
}
