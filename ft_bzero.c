#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *str = (char *)s;

    if (n != 0)
    {
        while (n > 0)
        {
            str[n - 1] = 0;
            n--; 
        }
    }
}
