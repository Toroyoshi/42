/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:40:36 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 16:53:31 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[20];
// 	char src[] = "Hello, World!";
// 	unsigned int size = 10;
// 	unsigned int result;

// 	result = ft_strlcpy(dest, src, size);

// 	printf("Source: %s\n", src);
// 	printf("Destination: %s\n", dest);
// 	printf("Length of source: %u\n", result);

// 	return (0);
// }