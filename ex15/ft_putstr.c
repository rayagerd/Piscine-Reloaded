/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:50:10 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/11 17:57:15 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		ft_putchar(str[l]);
		l++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hello World!";
	ft_putstr(str);
	return (0);
}
*/
