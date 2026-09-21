/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 17:18:57 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 17:49:07 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	f;
// 	int	t;

// 	f = -5;
// 	t = ft_recursive_factorial(f);
// 	printf("resultado: %d", t);

// 	return (0);
// }
// 12! eh o maximo que o int aguenta 
// 13! =   6 227 020 800 