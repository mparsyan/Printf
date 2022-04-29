#include "ft_printf.h"

int ft_print_nbr(unsigned int i, int base)
{
    char hex[] = "0123456789abcdef";
    char dec[] = "0123456789";
    int n;

    int count = 0;
    if (i / base != 0)
        count += ft_print_nbr(i / base, base);
    n = i % base;
    if (base == 16)                     // %x
        count += write(1, &hex[n], 1);
    else if (base == 10)                // %d
        count += write(1, &dec[n], 1);
    return (count);
}
