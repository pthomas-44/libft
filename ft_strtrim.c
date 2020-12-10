/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:01:44 by pthomas           #+#    #+#             */
/*   Updated: 2020/11/27 22:02:26 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	char		*str;

	if (s1 == 0)
		return (0);
	end = s1 + ft_strlen(s1) - 1;
	while (ft_isset(set, *s1))
		s1++;
	if (*s1 == 0)
		return (str = ft_calloc(1, sizeof(char)));
	while (ft_isset(set, *end))
		end--;
	if (!(str = malloc(sizeof(char) * (end - s1 + 2))))
		return (0);
	ft_strlcpy(str, s1, end - s1 + 2);
	return (str);
}
