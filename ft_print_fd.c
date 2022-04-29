#include "ft_printf.h"

int ft_print_fd(int i)
{
    int count;

    count = 0;
    if (i < 0)
    {
        i *= -1;
        count += ft_print_char('-');
    }
    count += ft_print_nbr(i, 10);
    return (count);

}