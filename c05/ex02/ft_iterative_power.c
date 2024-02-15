/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:31:08 by railhan           #+#    #+#             */
/*   Updated: 2024/02/14 17:34:36 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		res;

	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	res = 1;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
