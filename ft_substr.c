#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *sub;

    sub = (char *)malloc(sizeof(*s) * (len + 1));
    if (sub == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (i >= start && j < len)
        {
            sub[j] = s[i];
        }
        i++;
    }
    sub[i] = '\0';
    return (sub);
}