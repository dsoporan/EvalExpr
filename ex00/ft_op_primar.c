/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_primar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 18:40:33 by dsoporan          #+#    #+#             */
/*   Updated: 2016/07/23 18:56:48 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_op_primar(void)
{
	int		result;
	char	operand;

	result = ft_verificare();
	while (ft_actual() == '*' || ft_actual() == '/' || ft_actual() == '%')
	{
		operand = ft_next();
		if (operand == '*')
			result = result * ft_verificare();
		else if (operand == '/')
			result = result / ft_verificare();
		else
			result = result % ft_verificare();
	}
	return (result);
}
