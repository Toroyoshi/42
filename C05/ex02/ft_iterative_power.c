/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 17:46:38 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 18:10:02 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb = base * nb;
		power--;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	int p;
// 	int	t;

// 	n = 2;
// 	p = 1;
// 	t = ft_iterative_power(n, p);
// 	printf("resultado: %d", t);

// 	return (0);
// }