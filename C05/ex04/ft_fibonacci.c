/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 20:07:09 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/21 21:41:56 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int r;
	
	i = 0;
	if (i < 0)
	{
		return (-1);
	}
	if (i == 0)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	while (index >= 0)
	{
		r = ft_fibonacci(n) + ft_fibonacci(n - 1);
	}
}