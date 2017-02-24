/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verificare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 18:41:27 by dsoporan          #+#    #+#             */
/*   Updated: 2016/07/23 18:58:21 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_verificare(void)
{
	int result;

	if (ft_actual() >= '0' && ft_actual() <= '9')
		return (ft_number());
	else if (ft_actual() == '(')
	{
		ft_next();
		result = ft_op_secundar();
		ft_next();
		return (result);
	}
	else if (ft_actual() == '-')
	{
		ft_next();
		return (-ft_verificare());
	}
	return (0);
}
