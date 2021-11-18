/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:32:46 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/18 11:32:47 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(va_list list, int *nb, char *hexa)
{
	unsigned int	nbr;

	nbr = va_arg(list, unsigned int);
	ft_putnbr_base(nbr, hexa, nb);
}
