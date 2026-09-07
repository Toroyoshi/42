/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:50:27 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/07 21:06:22 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 123;
	while (c >= 98)
	{
		c = c - 1;
		write(1, &c, 1);
	}
}

//int main(){
//	ft_print_reverse_alphabet();
//	return (0);
//	}
