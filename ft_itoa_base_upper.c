/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkandemi <bkandemi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:41:45 by bkandemi          #+#    #+#             */
/*   Updated: 2022/03/08 15:42:32 by bkandemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base_upper(uintmax_t nb, int base)
{
	return (ft_itoa_base_case(nb, base, "0123456789ABCDEF"));
}
