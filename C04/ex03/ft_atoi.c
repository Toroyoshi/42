/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:17:58 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/23 16:00:20 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	pt_sign(char str)
{
	int	i;

	i = 1;
	if (str == '-')
	{
		i = -i;
	}
	else
	{
		i = 1;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	long			n;
	int				r;
	int				sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		sign = sign * pt_sign(str[i]);
		i++;
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
// 	char	str[] = "   -+-123";
// 	int		resultado;

// 	resultado = ft_atoi(str);
// 	printf("Resultado: %d\n", resultado);
// 	return (0);
// }