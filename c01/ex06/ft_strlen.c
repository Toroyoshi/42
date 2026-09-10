/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 19:51:41 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/10 20:35:56 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
//	printf("len = %d", i);
	return (0);
}

// int main(void)
// {
// 	char *test = "eu vou testar esse bagulho todo.";
// 	ft_strlen(test);
// 	return 0;
// }