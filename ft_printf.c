#include "ft_printf.h"

int ft_printf(const char *fmt, ...)
{
    va_list ap;
    int i;
    int count;

    count = 0;
    i = 0;
    va_start(ap, fmt);
    while (fmt[i])
    {
        if (fmt[i] == '%')
        {
            i++;
            if (fmt[i] == 'd')
                count += ft_print_fd(va_arg(ap, unsigned int));
            if (fmt[i] == 's')
                count += ft_print_str(va_arg(ap, char *));
            if (fmt[i] == 'x')
                count += ft_print_nbr(va_arg(ap, unsigned int), 16);
            if (fmt[i] == 'c')
                count += ft_print_char(va_arg(ap, int));
            if (fmt[i] == 'p')
                count += ft_print_ptr(va_arg(ap, size_t));
            if (fmt[i] == 'i')
                count += ft_print_fd(va_arg(ap, unsigned int)); 
            if (fmt[i] == 'u')
                count += ft_print_unsigned(va_arg(ap, unsigned int), 10);
            if (fmt[i] == '%')
                count += ft_print_char('%');       
        }        
        else
            count += ft_print_char(fmt[i]);
        i++;
    }
    va_end(ap);
    return (count);
}

// int main()
//  {
//      printf("%d\n", (ft_printf("%s\n", "AVE MARIA")));
//      printf("%d\n", (printf("%s\n", "AVE MARIA")));
//  }