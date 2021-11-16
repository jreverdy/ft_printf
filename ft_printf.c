#include "libft/libft.h"
#include <stdarg.h>

int		ft_putnbr(int n)
{
	long	nb;
	int 	compteur;

	compteur = 0;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		compteur += write(1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	nb = (nb % 10);
	nb += '0';
	compteur += write(1, &nb, 1);
	return (compteur);
}

void	ft_putn(va_list list, int *nb)
{
	int n;

	n = va_arg(list, int);
}

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

void	ft_putc(va_list list, int *nb)
{
	char c;

	c = va_arg(list, int);
	*nb += write(1, &c, 1);
}
void	ft_check(char c, va_list list, int *nb)
{
	if (c == 'c')
		ft_putc(list, nb);
	else if (c == 's')
		ft_puts(list, nb);
	else if (c == 'i' || c == 'd')
		ft_putn(list, nb);
}

int	ft_printf(const char *str, ...)
{
	va_list list;
	int 	nb;

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

int main(void)
{
	char *s;
	printf("ret=%d\n", printf("bonjour %p", s));
	printf("ret=%d\n", ft_printf("bonjour %s", NULL));
}

