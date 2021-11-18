/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:08:40 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/18 12:08:42 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putnbr_base(unsigned long long nbr, char *base, int *nb);
void	ft_put_nbr(int n, int *compteur);
void	ft_putuns_nbr(unsigned int n, int *compteur);
void	ft_putadd_p(va_list list, int *nb);
void	ft_putc(va_list list, int *nb);
void	ft_putn(va_list list, int *nb);
void	ft_puts(va_list list, int *nb);
int		ft_strlen(char *str);
void	ft_puthex(va_list list, int *nb, char *hexa);

#endif //FT_PRINTF_H
