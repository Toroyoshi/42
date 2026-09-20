/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:43:34 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/15 18:54:39 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
// 	int resultado;

// 	resultado = ft_str_is_lowercase("zyxwdjaewhiuawnfkbewla");
// 	printf("Result is: %d\n", resultado);
// 	return (0);
// }