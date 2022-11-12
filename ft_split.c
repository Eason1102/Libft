/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseah <eseah@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:33:26 by eseah             #+#    #+#             */
/*   Updated: 2022/11/12 19:14:14 by eseah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	length(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	if (!s[0])
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
				count++;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

int	length2(char *s, int i, char c)
{
	int	j;

	j = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		len;
	int		var[3];

	var[1] = -1;
	var[0] = 0;
	if (!s)
		return (NULL);
	len = length(s, c);
	res = malloc((len + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (var[1]++ < len)
	{
		while (s[var[0]] && s[var[0]] == c)
			var[0]++;
		if (var[0] == (int)ft_strlen(s))
			break ;
		var[2] = length2((char *)s, var[0], c);
		res[var[1]] = malloc(var[2] * sizeof(char *));
		ft_strlcpy(res[var[1]], &s[var[0]], var[2] + 1);
		var[0] += var[2];
	}
	res[var[1]] = NULL;
	return (res);
}
