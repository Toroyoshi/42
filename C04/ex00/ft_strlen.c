/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:12:47 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/17 19:18:08 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main (void)
// {
// 	int r;
// 	r = ft_strlen("sera?");

// 	printf("tamanho: %d", r);
// 	return 0;
// }