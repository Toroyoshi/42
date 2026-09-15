/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:44:42 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/15 15:25:39 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i] == '\0' || i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *teste;
// 	char *resultado;
// 	teste = "is it woking???";

// 	unsigned	int j;
//     unsigned	int	p;
// 	unsigned	int i;

//     p = 20;
// 	j = 0;
// 	i = 0;
// 	while (j <= p){
// 		j++;
// 	} 
// 	j++;

// 	char dest[j];
// 	resultado = ft_strncpy(dest, teste, p);
// 	printf("%s\n", resultado);
// 	while (i < p){
// 		printf("%d\n", i);	
// 		i++;
// 	}
// }