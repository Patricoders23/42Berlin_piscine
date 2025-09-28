/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_using_pointer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgadge <sgadge@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:45:15 by sgadge            #+#    #+#             */
/*   Updated: 2025/09/07 20:50:45 by ktrianta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c);
int	main(void);

void	swap(int i, int row, char *start, char *end, char *filler)
{
	if (i != 0)
	{
		*start = '*';
		*end = '*';
		*filler = ' ';
	}
	if (i == row - 1 && row > 1)
	{
		*start = '\\';
		*end = '/';
		*filler = '*';
	}
}

void	rush(int col, int row)
{
	int	i;
	int	j;
	char	start = '/';

	
	i = 0;
	j = 1;
	while (i <= row - 1)
	{
		get_start_end_filler(i, row, &start, &end, &filler);
		ft_putchar(start);
		while (j < col - 1)
		{
			ft_putchar(filler);
			j++;
		}
		if (col > 1)
		{
			ft_putchar(end); 
		}
		j = 1;
		i++;
		ft_putchar('\n');
	}
}
