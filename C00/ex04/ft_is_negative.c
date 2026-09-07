/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 20:57:25 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/07 21:17:37 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	u;
	char	p;	

	if (n < 0)
	{
		u = 'N';
		write (1, &u, 1);
	}
	else
	{
		p = 'P';
		write (1, &p, 1);
	}
}

// int main(){
//     ft_is_negative(6);
//     return 0;
// }
