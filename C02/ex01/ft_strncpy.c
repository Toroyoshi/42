/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:44:42 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 16:51:48 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest1[200] = "World1";
// 	char	dest2[200] = "World1";
// 	char	dest3[200] = "World1";
// 	char	src[] = "Hello";

// 	ft_strncpy(dest1, src, 3);
// 	ft_strncpy(dest2, src, 5);
// 	ft_strncpy(dest3, src, 26);

// 	printf("n = 3: %s\n", dest1);
// 	printf("n = 5: %s\n", dest2);
// 	printf("n = 26: %s\n", dest3);

// 	if (src[5] == '\0')
// 	printf("ss");
// 	return (0);
// }