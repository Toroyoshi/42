/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:59:33 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/20 18:48:22 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 69;
// 	b = 42;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("div: %d, mod: %d\n", div, mod);
// 	return (0);
// }
