/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:31:48 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/14 17:09:23 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c);
int		readfile(char *file);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	readfile(char *file)
{
	int		opn;
	int		ltnb;
	char	buffer;

	opn = open(file, O_RDONLY);
	if (opn == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ltnb = read(opn, &buffer, 1);
	while (ltnb == 1)
	{
		ft_putchar(buffer);
		ltnb = read(opn, &buffer, 1);
	}
	if (ltnb == -1)
	{
		write(2, "Cannot read file.\n", 18);
		close(opn);
		return (1);
	}
	close(opn);
	return (0);
}

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	result = readfile(argv[1]);
	return (result);
}
