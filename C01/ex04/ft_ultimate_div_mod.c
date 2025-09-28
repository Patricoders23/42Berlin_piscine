/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricig <patricig@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 22:42:25 by patricig          #+#    #+#             */
/*   Updated: 2025/09/24 20:46:50 by patricig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	div = *a / *b;
	resto = *a % *b;
	*a = div;
	*b = resto;
}

/*#include <stdio.h>

int main(void)
{
	int x;
	int y;

	x = 10;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("Division %d, Resto %d", x, y);
	return (0);
}*/
