/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:48:55 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 13:16:40 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= '~'))
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

// 	resultado = ft_str_is_printable("arr2 \x7F");
// 	printf("Result is: %d\n", ft_str_is_printable("0-ajscjn7n1 s"));
// 	printf("Result is: %d\n", ft_str_is_printable(""));
// 	printf("Result is: %d\n", ft_str_is_printable(" "));
// 	return (0);
// }