/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricig <patricig@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 21:32:29 by patricig          #+#    #+#             */
/*   Updated: 2025/09/24 23:26:20 by patricig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	ft_putstr("Hola 42");
	write(1, "\n", 1);

	char s[] = {'H', 'i', '\0', 'B', 'Y', 'e'};
	ft_putstr(s);
	write(1, "\n", 1);

	char *p = 0;
	ft_putstr(p);
	write(1, "\n", 1);
}*/
