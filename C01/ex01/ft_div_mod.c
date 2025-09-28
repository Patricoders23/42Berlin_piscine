/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricig <patricig@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 22:06:39 by patricig          #+#    #+#             */
/*   Updated: 2025/09/22 22:39:50 by patricig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int div;
	int resto;

	a = 15;
	b = 11;
	ft_div_mod(a, b, &div, &resto);
	printf("Division %d, resto %d", div, resto);
	return (0);
}
