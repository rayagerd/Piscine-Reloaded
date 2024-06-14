/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:46:22 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/11 15:37:05 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>*/

char	*ft_strdup(char *src)
{
	int		length;
	char	*dst;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	dst = malloc(sizeof(char) * length + 1);
	length = 0;
	while (src[length] != '\0')
	{
		dst[length] = src[length];
		length++;
	}
	dst[length] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char	*dst;

	dst = ft_strdup("Hello World");
	printf("%s\n", dst);
	return (0);
}
*/
