/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:31:15 by mykman            #+#    #+#             */
/*   Updated: 2020/09/12 19:32:13 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *s;

	s = str;
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}
	return (str);
}