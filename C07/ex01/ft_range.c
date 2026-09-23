/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 21:14:53 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/23 21:54:18 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	array = malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[i++] = min++;
	}
	return (array);
}

// #include <stdio.h>
// int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	*array;
// 	int	min;
// 	int	max;
// 	int	i;

// 	min = -45;
// 	max = 69;
// 	i = 0;
// 	array = ft_range(min, max);
// 	if (array == NULL)
// 	{
// 		printf("NULL\n");
// 		return (0);
// 	}
// 	while (i < max - min)
// 	{
// 		printf("array[%d] = %d\n", i, array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }