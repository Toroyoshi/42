/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:45:40 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 19:21:52 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

// #include <stdio.h>

// int main(void)
// {
//     int a;
//     int b;
//     a = 42;
//     b = 69;

//     printf("antes: a = %d, b = %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("depois: a = %d, b = %d\n", a, b);
// 	return (0);
// }