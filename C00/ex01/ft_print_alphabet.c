/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 19:04:50 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/07 21:05:14 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	c;

	c = 96;
	while (c <= 121)
	{
		c = c + 1;
		write(1, &c, 1);
	}
}
//int main(){
//	ft_print_alphabet();
//	return 0;
//}
