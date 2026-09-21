/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:16:01 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 18:20:54 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
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
	return(base * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	int p;
// 	int	t;

// 	n = 2;
// 	p = 2;
// 	t = ft_recursive_power(n, p);
// 	printf("resultado: %d", t);

// 	return (0);
// }