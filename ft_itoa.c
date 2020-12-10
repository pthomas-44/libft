/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthomas <pthomas@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 07:36:38 by pthomas           #+#    #+#             */
/*   Updated: 2020/11/29 19:28:55 by pthomas          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int n)
{
	long int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	long	nb;
	char	*a;
	int		i;

	nb = n;
	if (!(a = malloc(sizeof(char) * (ft_intlen(n) + 1))))
		return (0);
	i = ft_intlen(n);
	a[i--] = 0;
	if (nb < 0)
	{
		a[0] = '-';
		nb = -nb;
	}
	while (nb > 9)
	{
		a[i--] = nb % 10 + 48;
		nb /= 10;
	}
	a[i] = nb + 48;
	return (a);
}
