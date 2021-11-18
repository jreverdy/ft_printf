/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:32:23 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/18 11:32:25 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

//int		ft_strlen(char *str)
//{
//	size_t	i;
//
//	i = 0;
//	while (str[i])
//		i++;
//	return (i);
//}
//
//void	ft_put_nbr(int n, int *compteur)
//{
//	long	nb;
//
//	nb = n;
//	if (nb < 0)
//	{
//		nb = -nb;
//		*compteur += write(1, "-", 1);
//	}
//	if (nb > 9)
//		ft_put_nbr((nb / 10), compteur);
//	nb = (nb % 10);
//	nb += '0';
//	*compteur += write(1, &nb, 1);
//}
//
//void	ft_putuns_nbr(unsigned int n, int *compteur)
//{
//	if (n > 9)
//		ft_put_nbr((n / 10), compteur);
//	n %= 10;
//	n += '0';
//	*compteur += write(1, &n, 1);
//}
//
//void	ft_puthex(va_list list, int *nb, char *hexa)
//{
//	unsigned int nbr;
//
//	nbr = va_arg(list, unsigned int);
//	ft_putnbr_base(nbr, hexa, nb);
//}
//
//void	ft_putadd_p(va_list list, int *nb)
//{
//	unsigned long int	pointer_adress;
//	char 	*base;
//
//	base = "0123456789abcdef";
//	pointer_adress = va_arg(list, unsigned long int);
//	*nb += write(1, "0x", 2);
//	ft_putnbr_base(pointer_adress, base, nb);
//}
//
//void	ft_putn(va_list list, int *nb)
//{
//	int n;
//	int compteur;
//
//	compteur = 0;
//	n = va_arg(list, int);
//	ft_put_nbr(n, nb);
//}
//
//void	ft_puts(va_list list, int *nb)
//{
//	char	*str;
//
//	str = va_arg(list, char *);
//	if (!str)
//	{
//		*nb += write(1, "(null)", 6);
//		return ;
//	}
//	*nb += write(1, str, ft_strlen(str));
//}
//
//void	ft_putc(va_list list, int *nb)
//{
//	char c;
//
//	c = va_arg(list, int);
//	*nb += write(1, &c, 1);
//}
//
void	ft_putunsnbr(va_list list, int *nb)
{
	unsigned int	n;

	n = va_arg(list, unsigned int);
	ft_putuns_nbr(n, nb);
}

void	ft_check(char c, va_list list, int *nb)
{
	if (c == '%')
		*nb += write(1, "%", 1);
	if (c == 'c')
		ft_putc(list, nb);
	else if (c == 's')
		ft_puts(list, nb);
	else if (c == 'i' || c == 'd')
		ft_putn(list, nb);
	else if (c == 'p')
		ft_putadd_p(list, nb);
	else if (c == 'u')
		ft_putunsnbr(list, nb);
	else if (c == 'x')
		ft_puthex(list, nb, "0123456789abcdef");
	else if (c == 'X')
		ft_puthex(list, nb, "0123456789ABCDEF");
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		nb;

	nb = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
		{
			ft_check(*(str + 1), list, &nb);
			str += 2;
		}
		else
		{
			nb += write(1, str, 1);
			str++;
		}
	}
	va_end(list);
	return (nb);
}

//
//#include <stdio.h>
//
//int main(void)
//{
//	int *d;
//	printf(" Valeur de return = %d\n", ft_printf("%p", &d));
//	printf(" Valeur de return = %d\n", printf("%p", &d));
//}