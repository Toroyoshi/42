/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:28:24 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/23 15:56:21 by jovitor          ###   ########.fr       */
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

void	ft_write(int ac, char **av)
{
	int	j;
	int	l;

	j = 1;
	while (j < ac)
	{
		l = ft_strlen(av[j]);
		write(1, av[j], l);
		write(1, "\n", 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	int			i;
	int			j;
	char		*temp;

	j = 1;
	while ((j < ac - 1) && (ac != 0))
	{
		i = 0;
		while ((av[j][i] == av[j + 1][i]) && av[j][i] != '\0' && j < ac)
		{
			i++;
		}
		if ((av[j][i] > av[j + 1][i]))
		{
			temp = av[j + 1];
			av[j + 1] = av[j];
			av[j] = temp;
		}
		j++;
	}
	ft_write(ac, av);
	return (0);
}
