/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricig <patricig@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:36:30 by patricig          #+#    #+#             */
/*   Updated: 2025/09/17 21:20:40 by patricig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recursive(int n, int start, int num, int output[])
{
	int	i;

	i = 0;
	if (n == 0)
	{
		while (i < num)
		{
			ft_putchar(output[i] + 48);
			i++;
		}
		if (output[0] != 10 - num)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = start;
	while (i <= 9)
	{
		output[num] = i;
		ft_print_combn_recursive(n -1, i + 1, num +1, output);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	output[10];

	ft_print_combn_recursive(n, 0, 0, output);
}

/*int	main(void)
{
	ft_print_combn(6);
	return (0);
}*/
