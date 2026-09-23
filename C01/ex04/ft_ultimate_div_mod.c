/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 20:08:03 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 19:21:15 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>

// int main(void)
// {
//     int a;
//     int b;

//     a = 11;
//     b = 2;
//     ft_ultimate_div_mod(&a, &b);
//     printf("div: %d, mod: %d\n", a, b);
//     return (0);
// }