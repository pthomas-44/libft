/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:44:30 by pthomas           #+#    #+#             */
/*   Updated: 2020/11/29 15:57:28 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *p;

	p = dst;
	if (src == 0 && dst == 0)
		return (0);
	while (n--)
		*(unsigned char*)dst++ = *(unsigned char*)src++;
	return (p);
}
