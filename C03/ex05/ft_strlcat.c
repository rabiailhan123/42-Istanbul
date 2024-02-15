/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: railhan <railhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:11:52 by railhan           #+#    #+#             */
/*   Updated: 2024/02/12 14:22:35 by railhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>///////
#include <string.h>

/*unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		total;

	i = 0;
	j = 0;
	while (dest[i] && i < size - 1)
		i++;
	while (src[j])
		j++;
	total = i;
	if (i >= size - 1)
		return (total);
	if(i + j < size)
		total == i + j;
	k = 0;
	while (src[k] && i + 1 < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	
	dest[i] = '\0';
	printf("i is %d, j is %d", i, j);
	printf("\ndest is-	%s\n", dest);
	
	return (total);
}

int main()
{
	char a[7] = "cedkm";
	char b[20] = "xswde";
	
	printf("\n%u\n", ft_strlcat(a, b, 6));
	printf("%lu", strlcat(a, b, 6));
	
}*/
#include <stddef.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int total;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (i == size)
		return (size + j);
	if (j < size - i)
	{
		k = 0;
		while (k < j + 1)
		{
			dest[i + k] = src[k];
			if (total == size - 1)
				break;
		}
	}else{
		
	}
	dest[total] = '\0';
	
	printf("\ndest is-	%s\n", dest);
	if (!*dest)
		return (size - j - 1);
	else
		return (size + j -1);
}
int main()
{
	char a[7] = "";
	char b[78] = "hfdj";
	
	printf("\n%u, %lu\n", ft_strlcat(a, b, 7), strlcat(a, b, 7));
	/**a = "sfdve;";
	*b = "hfdj";
	printf("\n%u, %lu\n", ft_strlcat(a, b, 7), strlcat(a, b, 7));
	*a = "e";
	*b = "hfdja sdfdc";
	printf("\n%u, %lu\n", ft_strlcat(a, b, 7), strlcat(a, b, 7));
	*a = "fvdgvfbfbrf";
	*b = "bfgbf";
	printf("\n%u, %lu\n", ft_strlcat(a, b, 7), strlcat(a, b, 7));
	*/
	
}