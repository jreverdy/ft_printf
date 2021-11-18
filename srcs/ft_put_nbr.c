/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:32:31 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/18 11:32:33 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_nbr(int n, int *compteur)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		*compteur += write(1, "-", 1);
	}
	if (nb > 9)
		ft_put_nbr((nb / 10), compteur);
	nb = (nb % 10);
	nb += '0';
	*compteur += write(1, &nb, 1);
}
