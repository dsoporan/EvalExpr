/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_secundar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 18:38:47 by dsoporan          #+#    #+#             */
/*   Updated: 2016/07/23 18:55:20 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_op_secundar(void)
{
	int result;

	result = ft_op_primar();
	while (ft_actual() == '+' || ft_actual() == '-')
		if (ft_next() == '+')
			result = result + ft_op_primar();
		else
			result = result - ft_op_primar();
	return (result);
}
