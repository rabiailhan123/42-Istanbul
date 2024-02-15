/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:34:18 by railhan           #+#    #+#             */
/*   Updated: 2024/02/12 15:13:19 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		power(int a, int b)
{
	int		i;

	i = 0;
	while(i < b - 1)
	{
		a *= a;
	}
	return (a);
}

int ft_atoi(char *str)
{
	int		i;
	int		j;
	int		num;
	int 	sign;

	i = 0;
	sign = 1;
	j = 0;
	num = 0;
	while (str[i])
	{
		if(str[i] == '-')
			sign *= -1;
		else if(str[i] >= 0 && str[i] <= 9)
		{
			while (str[i + j])
			{
				if(str[i] >= 0 && str[i] <= 9)
					num += power(10, j) * (str[i + j] - '0');
				else 
					return (num * sign);
				j++;
			}
			break;
		}
		i++;
	}
	return (num *sign);
}

#include<stdio.h>

int main()
{
	printf("%d, ", ft_atoi("124fhe"));
	printf("%d, ", ft_atoi("  23fu45"));
	printf("%d, ",ft_atoi("--+++-e234") );
	printf("%d, ",ft_atoi("--+++-34re56"));
}