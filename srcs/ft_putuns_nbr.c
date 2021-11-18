/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:33:18 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/18 11:33:20 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns_nbr(unsigned int n, int *compteur)
{
	if (n > 9)
		ft_put_nbr((n / 10), compteur);
	n %= 10;
	n += '0';
	*compteur += write(1, &n, 1);
}
