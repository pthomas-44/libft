/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:37:50 by pthomas           #+#    #+#             */
/*   Updated: 2020/11/26 19:00:07 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dst;

	i = -1;
	if (s == 0)
		return (0);
	if (!(dst = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (s[++i])
		dst[i] = (*f)(i, s[i]);
	dst[i] = 0;
	return (dst);
}
