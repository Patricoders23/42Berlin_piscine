/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrianta <ktrianta@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:32:50 by ktrianta          #+#    #+#             */
/*   Updated: 2025/09/07 20:53:54 by ktrianta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c);
int	main(void);

char	logic(int r, int c, int x, int y)
{
	if (r == 0 && c == 0)
	{
		return ('/');
	}
	else if (r == 0 && c == x - 1)
	{
		return ('\\');
	}
	else if (r == y - 1 && c == 0)
	{
		return ('\\');
	}
	else if (r == y - 1 && c == x - 1)
	{
		return ('/');
	}
	else if (r == 0 || r == y - 1 || c == 0 || c == x - 1)
	{
		return ('*');
	}
	else
	{
		return (' ');
	}
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 0;
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			ft_putchar(logic(r, c, x, y));
			c++;
		}
		{
			ft_putchar('\n');
			r++;
		}
	}
}
