/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:44:28 by railhan           #+#    #+#             */
/*   Updated: 2024/02/15 13:11:00 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}
