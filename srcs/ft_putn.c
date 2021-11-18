/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:32:51 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/18 11:32:52 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putn(va_list list, int *nb)
{
	int	n;
	int	compteur;

	compteur = 0;
	n = va_arg(list, int);
	ft_put_nbr(n, nb);
}
