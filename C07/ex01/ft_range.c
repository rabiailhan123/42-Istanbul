/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:44:07 by railhan           #+#    #+#             */
/*   Updated: 2024/02/15 12:23:27 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		len;
	int		*nums;
	int		i;

	if (min >= max)
		return (0);
	len = max - min;
	nums = (int *)malloc(len * sizeof(int));
	if (!nums)
		return (0);
	i = 0;
	while (i < len)
	{
		nums[i] = i + min;
		i++;
	}
	nums[i] = '\0';
	return (nums);
}
