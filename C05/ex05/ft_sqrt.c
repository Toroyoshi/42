/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:04:51 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 15:17:30 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= (nb / i))
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	if ((i * i) != nb)
	{
		return (0);
	}
	return (i);
}

// #include <stdio.h>
// int main (void)
// {
// 	int nb;

// 	nb = 253;
// 	printf("sqrt of %d = %d", nb , ft_sqrt(nb));
// 	return (0);
// }