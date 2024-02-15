/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:19:47 by railhan           #+#    #+#             */
/*   Updated: 2024/02/07 16:54:14 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str++;
		if (!(c >= 32 && c <= 126))
			return (0);
	}
	return (1);
}