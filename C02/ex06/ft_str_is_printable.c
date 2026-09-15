/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:48:55 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/15 15:54:46 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= ' ' && str[i] <= '~') || str[i] == 011) // tab mbe
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
	
	resultado = ft_str_is_printable("HDIUWGA OYFVLB`~	 LABFEIGAE");
	printf("Result is: %d\n", resultado);
	return (0);
}