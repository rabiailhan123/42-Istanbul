/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:30:43 by railhan           #+#    #+#             */
/*   Updated: 2024/02/07 17:37:03 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		bool;
	int		i;

	bool = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 'z') || (str[i] >= 48 && str[i] <= 57))
		{
			if (bool == 1)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] += 'A' - 'a' ;
				}
				bool = 0;
			}
		}
		else
			bool = 1;
		i++;
	}
	return (str);
}
