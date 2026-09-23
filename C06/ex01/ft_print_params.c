/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:57:48 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/23 13:15:38 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	l;

	i = 1;
	l = 0;
	while (i < ac)
	{
		l = ft_strlen(av[i]);
		write(1, av[i], l);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
