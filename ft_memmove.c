#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    if (dst > src)
    {
        i = len;
        while (i > 0)
        {
            len--;
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        }
    }
    else
    {
        i = 0;
        while (len < i)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dst);
}