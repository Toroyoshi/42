/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:29:17 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/15 18:59:36 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
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

// 	resultado = ft_str_is_numeric("07610387124");
// 	printf("Result is: %d\n", resultado);
// 	return (0);
// }