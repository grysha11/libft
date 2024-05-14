#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t total;
    void *p;

    if (count == 0 || size == 0)
    {
        count = 1;
        size = 1;
    }
    total = count * size;
    p = malloc(total);
    if (p == NULL)
        return (NULL);
    else
        ft_bzero(p, total);
    
    return (p);
}