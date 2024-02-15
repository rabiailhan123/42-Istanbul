/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:57:58 by railhan           #+#    #+#             */
/*   Updated: 2024/02/12 12:27:22 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			{
				j++;
			}
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
