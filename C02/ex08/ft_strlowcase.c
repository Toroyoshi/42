/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:32:33 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 13:35:37 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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
// int main(void)
// {
//     char str[] = "DYLAFLAW";

//     printf("Antes:  %s\n", str);
//     ft_strlowcase(str);
//     printf("Depois: %s\n", str);
//     return (0);
// }