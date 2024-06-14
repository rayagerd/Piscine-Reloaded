/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:37:05 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/10 18:53:32 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
/*
int	main(void)
{
	char str1[] = "ABC";
	char str2[] = "ABC";
	int result = ft_strcmp(str1, str2);
	
	printf("%d\n", result);
	if(result < 0) 
	{
		printf("str1 is less than str2");
	} 
	else if(result > 0) 
	{
 		printf("str2 is less than str1");
 	} 
	else 
	{
		printf("str1 is equal to str2");
	}
	return(0);
}
*/
