/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bela.hajzer <bela.hajzer@learner.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 21:26:06 by bela.hajzer       #+#    #+#             */
/*   Updated: 2025/07/26 20:28:49 by mehdi.berraho    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_input_validation(int x, int y);

void	ft_print_error(void);

void	ft_putchar(char c);

void	ft_one_line(int x, char c1, char c2, char c3);

void	rush(int x, int y)
{
	int		line;

	if (ft_input_validation(x, y) == 1)
		return ;
	line = 0;
	ft_one_line(x, 'A', 'B', 'A');
	while (line < y - 2 && y > 2)
	{
		ft_one_line(x, 'B', ' ', 'B');
		line++;
	}
	if (y > 1)
		ft_one_line(x, 'C', 'B', 'C');
}

void	ft_one_line(int x, char c1, char c2, char c3)
{
	int		col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
		{
			ft_putchar(c1);
		}
		else if (col != x -1)
		{
			ft_putchar(c2);
		}
		else
		{
			ft_putchar(c3);
		}
		col++;
	}
	ft_putchar('\n');
}

int	ft_input_validation(int x, int y)
{
	if (x < 1 || y < 1)
	{
		ft_print_error();
		return (1);
	}
	return (0);
}

void	ft_print_error(void)
{
	write(1, "Please enter valid positive numbers!\n", 37);
}
