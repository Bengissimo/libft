/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:55:16 by bkandemi          #+#    #+#             */
/*   Updated: 2022/02/21 14:09:01 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BASE_REF	"0123456789abcdef"

static unsigned int	count_digits(long nb, int base)
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

char	*ft_itoa_base(long nb, int base)
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
		str[size - 1] = BASE_REF[nb % base];
		nb = nb / base;
		size--;
	}
	return (str);
}
