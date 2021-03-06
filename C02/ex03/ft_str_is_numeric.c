/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:18:39 by mykman            #+#    #+#             */
/*   Updated: 2020/09/12 22:24:17 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if (!(str[c] >= '0' && str[c] <= '9'))
			return (0);
		c++;
	}
	return (1);
}
