/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:56:10 by railhan           #+#    #+#             */
/*   Updated: 2024/02/12 14:48:10 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print_char('-');
		print_char('2');
		ft_putnbr(147483648); 
	}
	else if (nb < 0)
	{
		print_char('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		print_char(nb + '0');
}
int main()
{
	ft_putnbr(-2147483648);
	ft_putnbr(23423);
	ft_putnbr(0);
	ft_putnbr(2147483647);
}