/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:20:58 by railhan           #+#    #+#             */
/*   Updated: 2024/02/15 13:15:51 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **str, int size)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*putstr(int size, char **strs, char *sep, char *new)
{
	int		i;
	int		len;
	int		j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			new[len++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				new[len++] = sep[j++];
		}
		i++;
	}
	new[len] = '\0';
	return (new);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*new;

	if (size == 0)
	{
		new = (char *)malloc(1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	len = ft_strlen(strs, size);
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	new = putstr(size, strs, sep, new);
	return (new);
}
