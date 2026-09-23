/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:23:22 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 16:52:09 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

// #include <stdio.h>

// char	*ft_strupcase(char *str);

// int	main(void)
// {
// 	char	str[] = "dylalfaw";

// 	printf("Antes:  %s\n", str);
// 	ft_strupcase(str);
// 	printf("Depois: %s\n", str);
// 	return (0);
// }