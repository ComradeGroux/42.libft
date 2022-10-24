/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:49:43 by vgroux            #+#    #+#             */
/*   Updated: 2022/10/24 18:06:21 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	int		i;
	char	*str;

	i = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[i] = 0;
	while (i >= 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
