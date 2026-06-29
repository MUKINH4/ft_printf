
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *fstr, ...);
void	handle_format(const char c, va_list list, int *count);

#endif
