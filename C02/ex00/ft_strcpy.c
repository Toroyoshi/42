/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor <jovitor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:11:45 by jovitor           #+#    #+#             */
/*   Updated: 2026/09/14 17:04:18 by jovitor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *teste;
// 	char *resultado;
// 	teste = "is it working?";
//
// 	int j;
//	
// 	j = 0;
// 	while (teste[j] != '\0'){
// 		j++;
// 	} 
// 	j++;
//	
// 	char dest[j];
// 	resultado = ft_strcpy(dest, teste);
//
// 	printf("%s", resultado);
// }