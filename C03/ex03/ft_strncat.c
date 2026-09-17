/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:01:05 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/17 17:13:56 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i++] = src[j++];
	}
	src[j] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[100] = "Joao eh ";
// //funciona sem o 100 mas pode dar risco de buffer overflow
// 	char	src[] = "Foda ";

// 	printf("Antes: %s\n", dest);

// 	ft_strncat(dest, src, 20);

// 	printf("Depois: %s\n", dest);
// 	return (0);
// }