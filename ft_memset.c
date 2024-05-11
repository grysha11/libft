#include "libft.h"

void *ft_memset(void *ptr, int value, size_t len)
{
    char *char_ptr = (char *)ptr;
    
    while (len > 0)
    {
        char_ptr[len - 1] = value;
        len--;
    }

    return (ptr);
}
