/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:55:06 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/17 14:45:45 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_baselenght(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base(unsigned long int nbr, char *base, int *nb)
{
	unsigned long int	number;
	unsigned long int 	i;

	i = ft_baselenght(base);

	number = nbr;
	if (nbr < 0)
		number *= -1;
	if (number >= i)
	{
		ft_putnbr_base(number / i, base, nb);
		number = number % i;
	}
	*nb += write(1, &base[number], 1);
}
