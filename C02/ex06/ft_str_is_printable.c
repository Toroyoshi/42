/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:48:55 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 15:16:12 by jovitor          ###   ########.fr       */
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
// 	// char arr2[] = {'a', 'b', 0x03,'\0'}; // If you wanna test in other way

// 	resultado = ft_str_is_printable("arr2 \x7F");
// 	printf("Result is: %d\n", resultado);
// 	return (0);
// }