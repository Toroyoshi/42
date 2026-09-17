/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:29:55 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/16 16:43:59 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] - s2[i] < 0)
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] - s2[i] > 0)
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int main (void)
// {
// 	int r;
// 	r = ft_strcmp("-", "Oi");
// 	printf("%d", r);
// 	return 0;
// }