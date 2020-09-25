/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:51:11 by mykman            #+#    #+#             */
/*   Updated: 2020/09/25 19:23:35 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	**ft_split(char *src, char *charset);

int		main(void)
{
	char *strs[] = 
	{
		"Bonjour",
		"comment",
		"tu",
		"vas"
	};
	printf("%s\n", ft_strjoin(4, strs, ", "));
	return (0);
}
