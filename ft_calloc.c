/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:42:01 by vgroux            #+#    #+#             */
/*   Updated: 2022/10/10 18:52:21 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned int	i;
	
	i = 0;
	ptr = (void*)malloc(count * size);
	if (ptr)
		return (NULL);
	while (i <= count)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}