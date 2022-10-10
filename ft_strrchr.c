/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:17:34 by vgroux            #+#    #+#             */
/*   Updated: 2022/10/10 14:45:23 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int		i;
	char				*ptr_temp;

	i = ft_strlen(s);
	ptr_temp = (char *)s;
	while (s[i] != c && i != 0)
		i--;
	if (s[i] != c)
		return (0);
	else
		return (&ptr_temp[i]);
}
