/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:21:17 by bkandemi          #+#    #+#             */
/*   Updated: 2022/03/11 11:43:29 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_power(int nb, int power)
{
	double	result;
	
	result = 1.0;
	if (power == 1)
		return (1.0);
	if (power < 0)
	{
		while (power < 0)
		{
			result = result / nb;
			power++;
		}
		return (result);
	}
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
