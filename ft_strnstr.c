/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:25:08 by vgroux            #+#    #+#             */
/*   Updated: 2022/10/11 13:39:08 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		validate;

	i = 0;
	validate = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j]
			&& needle[j] != '\0' && haystack[i + j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack[i]);
		i++;
	}
	return (NULL);
}
