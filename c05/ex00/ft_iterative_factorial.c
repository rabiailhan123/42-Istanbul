/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:28:23 by railhan           #+#    #+#             */
/*   Updated: 2024/02/14 17:32:23 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
