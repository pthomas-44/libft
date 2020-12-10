/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:48:55 by pthomas           #+#    #+#             */
/*   Updated: 2020/12/07 14:11:05 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (len > ft_strlen(s))
		len = ft_strlen(&s[start]);
	if (s == 0 || !(str = ft_calloc(sizeof(char), (len + 1))))
		return (0);
	if (start <= ft_strlen(s))
		ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
