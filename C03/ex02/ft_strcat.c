/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:17:57 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 12:29:28 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[100] = "Jhonny";
// //funciona sem o 100 mas pode dar risco de buffer overflow
// 	char	src[] = " Boy";

// 	printf("Antes: %s\n", dest);

// 	ft_strcat(dest, src);

// 	printf("Depois: %s\n", dest);
// 	return (0);
// }