/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_case.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:55:16 by bkandemi          #+#    #+#             */
/*   Updated: 2022/03/08 15:39:39 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_digits(uintmax_t nb, int base)
{
	unsigned int	digits;

	digits = 0;
	if (nb <= 0)
	{
		nb = -nb;
		digits++;
	}
	while (nb)
	{
		nb = nb / base;
		digits++;
	}
	return (digits);
}

char	*ft_itoa_base_case(uintmax_t nb, int base, char *base_ref)
{
	char			*str;
	unsigned int	size;

	if (base < 2 || base > 16)
		return (NULL);
	size = count_digits(nb, base);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[size] = '\0';
	while (nb > 0)
	{
		str[size - 1] = base_ref[nb % base];
		nb = nb / base;
		size--;
	}
	return (str);
}
