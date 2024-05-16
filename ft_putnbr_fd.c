#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *num;
    size_t len;

    num = ft_atoi(n);
    len = ft_strlen(num);
    write(fd, num, len);
}