/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 19:48:13 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 21:28:14 by jovitor          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("next_prime(1)  = %d\n", ft_find_next_prime(1));
// 	printf("next_prime(2)  = %d\n", ft_find_next_prime(2));
// 	printf("next_prime(8)  = %d\n", ft_find_next_prime(8));
// 	printf("next_prime(14) = %d\n", ft_find_next_prime(14));
// 	printf("next_prime(20) = %d\n", ft_find_next_prime(20));
// 	return (0);
// }