/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:26:09 by railhan           #+#    #+#             */
/*   Updated: 2024/02/06 17:37:20 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_min(int *arr, int size)
{
	int		min;
	int		minin;
	int		i;

	min = arr[0];
	minin = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minin = i;
		}
		i++;
	}
	return (minin);
}

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		min;

	i = 0;
	while (i < size - 1)
	{
		min = find_min(&tab[i], size - i) + i;
		ft_swap(&tab[i], &tab[min]);
		i++;
	}
}
