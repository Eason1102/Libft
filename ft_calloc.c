/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseah <eseah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:49:43 by eseah             #+#    #+#             */
/*   Updated: 2022/11/11 06:34:25 by eseah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;
	int		x;

	ptr = (void *)malloc(count * size);
	i = 0;
	x = count * size;
	if (!ptr)
		return (NULL);
	while (x--)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
