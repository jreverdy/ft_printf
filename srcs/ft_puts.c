/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:33:25 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/18 11:33:26 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puts(va_list list, int *nb)
{
	char	*str;

	str = va_arg(list, char *);
	if (!str)
	{
		*nb += write(1, "(null)", 6);
		return ;
	}
	*nb += write(1, str, ft_strlen(str));
}
