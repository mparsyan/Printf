#include "ft_printf.h"

int ft_print_unsigned (unsigned int i, int  base)
{
    char dec[] = "0123456789";
    int n;

    int count = 0;
    if (i / base != 0 && i > 0)
    {
        count += ft_print_nbr(i / base, base);
        n = i % base;
        if (base == 10)                             // %u
            count += write(1, &dec[n], 1);
    }
    return (count);
}