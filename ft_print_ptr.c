#include "ft_printf.h"

void	ft_print_char_fd(char c, int fd)
{
	write(fd, &c, 1);
}	

int ft_ptr_len (uintptr_t num)
{
    int len;
    len = 0;
    while (num != 0)
    {
        len++;
        num /= 16;
    }
    return (len);
}

void ft_ptr_hex(uintptr_t num)
{
    if(num >= 16)
    {
        ft_ptr_hex(num / 16);
        ft_ptr_hex(num % 16);
    }
    else 
    {
        if (num <= 9)
            ft_print_char_fd ((num + '0'), 1);
        else
            ft_print_char_fd ((num - 10 + 'a'), 1);
    }
}

int	ft_print_ptr(size_t   ptr)
{
    int length;
    length = 0;

    length += write (1, "0x", 2);
    if (ptr == 0)
        length += write (1, "0", 1);
    else
    {
        ft_ptr_hex(ptr);
        length += ft_ptr_len(ptr);
    }
    return (length);
}