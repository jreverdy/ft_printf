/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:32:37 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/18 11:32:38 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd_p(va_list list, int *nb)
{
	unsigned long int	pointer_adress;
	char				*base;

	base = "0123456789abcdef";
	pointer_adress = va_arg(list, unsigned long int);
	*nb += write(1, "0x", 2);
	ft_putnbr_base(pointer_adress, base, nb);
}
