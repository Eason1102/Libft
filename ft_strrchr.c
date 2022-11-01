/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseah <eseah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:51:22 by eseah             #+#    #+#             */
/*   Updated: 2022/11/01 10:55:38 by eseah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*n;

	n = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *n && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
