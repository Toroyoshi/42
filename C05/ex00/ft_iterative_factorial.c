/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:56:10 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 18:08:33 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		r = 1;
	}
	while (nb >= 1)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		f;
// 	long	t;

// 	f = 2;
// 	t = ft_iterative_factorial(f);
// 	printf("resultado: %ld", t);

// 	return (0);
// }
// 12! eh o maximo que o int aguenta 
// 13! =   6 227 020 800 