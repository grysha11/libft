#include "libft.h"

char *ft_strdup(const char *s1)
{
    int size;
    char *dup;
    int i;

    size = 0;
    while (s1[size] != '\0')
    {
        size++;
    }
    dup = (char *)malloc(size * sizeof(char));
    i = 0;

    while (i < size)
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
