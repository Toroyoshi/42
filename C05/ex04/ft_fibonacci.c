/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 20:07:09 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/22 15:02:41 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	ft_fibonacci(int index);

// int	main(void)
// {
// 	printf("fib(-1) = %d\n", ft_fibonacci(-1));
// 	printf("fib(0)  = %d\n", ft_fibonacci(0));
// 	printf("fib(1)  = %d\n", ft_fibonacci(1));
// 	printf("fib(2)  = %d\n", ft_fibonacci(20));
// 	printf("fib(3)  = %d\n", ft_fibonacci(3));
// 	printf("fib(5)  = %d\n", ft_fibonacci(5));
// 	printf("fib(10) = %d\n", ft_fibonacci(10));
// 	return (0);
// }