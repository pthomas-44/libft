/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:16:37 by pthomas           #+#    #+#             */
/*   Updated: 2020/11/29 15:57:23 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	void *p;

	p = dst;
	if (src == 0 && dst == 0)
		return (0);
	while (len--)
	{
		if (src < dst)
			*(unsigned char*)(dst + len) = *(unsigned char*)(src + len);
		else
			*(unsigned char*)dst++ = *(unsigned char*)src++;
	}
	return (p);
}
