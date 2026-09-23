/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:16:43 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 21:27:33 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if ((nb == 2) || (nb == 3))
	{
		return (1);
	}
	if ((nb % 2 == 0) || (nb % 3 == 0) || (nb <= 1))
	{
		return (0);
	}
	while (i < nb)
	{
		if ((nb < i) && (nb % i == 0))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
// 	int nb;

// 	nb = 4;
// 	printf("Primo retorna 1: nr(%d), resultado: %d", nb, ft_is_prime(nb));
// 	return (0);
// }