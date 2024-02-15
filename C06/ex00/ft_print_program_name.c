/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:58:02 by railhan           #+#    #+#             */
/*   Updated: 2024/02/14 17:57:13 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int		i;

	i = 0;
	if (argc == 1)
		argc = 1;
	while (argv[0][i])
	{
		write(1, &argv[0][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}