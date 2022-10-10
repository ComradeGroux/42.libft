/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:37:41 by vgroux            #+#    #+#             */
/*   Updated: 2022/10/10 14:29:44 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr_temp;

	i = 0;
	ptr_temp = (char *)s;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] != c)
		return (0);
	else
		return (&ptr_temp[i]);
}
