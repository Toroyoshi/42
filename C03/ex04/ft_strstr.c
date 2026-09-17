/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:14:26 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/17 18:57:56 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	
	i = 0;

	if (to_find[0] == '\0')
		{
			return (str);
		}
	
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j] != '\0')
			{
				j++;
			}
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Ola meu amigo";
	char	to_find[] = "";
	char	*resultado;

	resultado = ft_strstr(str, to_find);

	if (resultado != 0)
		printf("Encontrou: %s\n", resultado);
	else
		printf("Nao encontrou\n");
	return (0);
}