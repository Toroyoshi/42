/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:51:41 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 19:21:59 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	int r;
// 	char *test = "eu vou testar esse bagulho todo.";
// 	r = ft_strlen(test);

// 	printf("resultado: %d", r);
// 	return 0;
// }