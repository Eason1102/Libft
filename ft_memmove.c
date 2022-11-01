/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseah <eseah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:47:02 by eseah             #+#    #+#             */
/*   Updated: 2022/11/01 16:21:14 by eseah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src || !len)
		return (dst);
	i = 0;
	if (src > dst)
		ft_memcpy(dst, src, len);
	if (src < dst)
		while (i < len)
			((unsigned char *)dst)[len - i] = ((unsigned char *)src)[len - i];
			i++;
	return (dst);
}
