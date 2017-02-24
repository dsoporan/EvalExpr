/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 18:42:19 by dsoporan          #+#    #+#             */
/*   Updated: 2016/07/23 18:55:54 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_number(void)
{
	int result;

	result = ft_next() - '0';
	while (ft_actual() >= '0' && ft_actual() <= '9')
	{
		result = 10 * result + ft_next() - '0';
	}
	return (result);
}
