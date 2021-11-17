
#ifndef FT_PRINTF_FT_PRINTF_H
#define FT_PRINTF_FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

void	ft_putnbr_base(unsigned long long  nbr, char *base, int *nb);
int		ft_printf(const char *str, ...);

#endif //FT_PRINTF_FT_PRINTF_H
