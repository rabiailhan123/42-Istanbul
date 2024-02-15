/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:34:13 by railhan           #+#    #+#             */
/*   Updated: 2024/02/12 14:35:21 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		power(int a, int b)
{
	int		i;

	i = 0;
	while(i < b - 1)
	{
		a *= a;
		i++;
	}
	return (a);
}

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

int		is_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if(c == base[i])
			return (1);	
		i++;
	}
	return (0);
}

int		indexOf(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if(c == base[i])
			return (i);
		i++;
	}
			
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		len;
	int		num;
	int 	sign;

	len = 0;
	num = 0;
	i = 0;
	sign = 1;
	while (base[len])
	{
		len++;
	}
	while (str[i])
	{
		if(str[i] == '-')
			sign *= -1;
		else if(is_base(str[i], base))
		{
			j = 0;
			while (str[i + j])
			{
				if(is_base(str[i], base))
					num += power(len, j) * indexOf(str[i + j], base);
				else 
					return (num * sign);
				j++;
			}
			break;
		}
		i++;
	}
	return (num *sign);
	return (0);
}

#include <stdio.h>

int main()
{
	printf("number is %d", ft_atoi_base("1232123", "0123456789"));
}