/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:22:21 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/14 19:45:24 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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

#include <stdio.h>
int main (void)
{
	int resultado;
	
	resultado = ft_str_is_alpha("grnrsgsdn8Foi");

	printf("Result is: %d\n", resultado);
	return (0);
}