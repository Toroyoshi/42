/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:17:58 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/20 20:49:11 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	turn_sign(char str)
{
	int	sign;

	sign = 1;
	if (str == '-')
	{
		sign = (-sign);
	}
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	long			n;
	int				r;
	int				sign;

	i = 0;
	n = 0;
	r = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		sign(str[i]);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	n = (int)(sign * n);
	r = (int)n;
	return (r);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "   -+--1234a567";
// 	int		resultado;

// 	resultado = ft_atoi(str);
// 	printf("Resultado: %d\n", resultado);
// 	return (0);
// }