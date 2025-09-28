/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricig <patricig@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:48:22 by patricig          #+#    #+#             */
/*   Updated: 2025/09/22 22:02:41 by patricig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*#include <stdio.h>

int	main(void)
{
	int a = 4;
	int b = 2;

	ft_swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return 0;
}*/
