/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:34:16 by railhan           #+#    #+#             */
/*   Updated: 2024/02/12 14:35:12 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(char *base)
{
	int		i;
	char	hash[255]= {'-'};

	i = 0;
	while(base[i])
	{
		if(hash[base[i]] != '-' ||
		base[i] == '+' || base[i] == '-' )
			return (0);
		hash[base[i]] = base[i];
		i++;
	}
	if(i == 0 || i == 1)
		return (0);
	return (1);
}

void ft_putnbr(int nb, char *base, int len)
{
	char	c;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb *= -1;
		ft_putnbr(147483648, base, len);
	}else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb, base, len);
	}else if (nb > len - 1)
	{
		ft_putnbr(nb / len, base, len);
		ft_putnbr(nb % len, base, len);
	}
	c = base[nb % len];
	write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int		len;

	len = 0;
	while(base[len])
		len++;
	if (!check(base))
		return;
	ft_putnbr(nbr, base, len);
}