/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:07:55 by vgroux            #+#    #+#             */
/*   Updated: 2022/10/11 13:13:29 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1 && ((char *)s)[i] != (unsigned char)c)
	{
		i++;
	}
	if (((char *)s)[i] == (unsigned char)c)
		return ((void *)&(s[i]));
	else
		return (NULL);
}
