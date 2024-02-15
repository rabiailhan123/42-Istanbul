/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:42:04 by railhan           #+#    #+#             */
/*   Updated: 2024/02/01 16:43:50 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int num)
{
	int		i;
	int		j;

	i = num / 10 + '0';
	j = num % 10 + '0';
	write(1, &i, 1);
	write(1, &j, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = a + 1;
	while (a <= 98 && b <= 99)
	{
		print_number(a);
		write(1, " ", 1);
		print_number(b);
		if (a != 98)
			write(1, ", ", 2);
		b++;
		if (b == 100)
		{
			a++;
			b = a + 1;
		}
	}
}
