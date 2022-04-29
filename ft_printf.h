#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>
#include <limits.h>

int     ft_print_fd(int i);
int 	ft_print_char(char c);
int     ft_ptr_len (uintptr_t num);
int	    ft_print_ptr(size_t   ptr);
int     ft_print_nbr(unsigned int i, int base);
int     ft_printf(const char *fmt, ...);
int     ft_print_unsigned (unsigned int i, int  base);
void    ft_print_percent(void);
int 	ft_print_str(char *str);
void    ft_ptr_hex(uintptr_t num);
void 	ft_print_char_fd(char c, int fd);

#endif