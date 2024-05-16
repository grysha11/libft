#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t len;
    size_t i;
    size_t j;
    size_t k;

    len = ft_strlen(s1) - ft_strlen(set) + 1;
    str = (char *)malloc(len);
    if (str == NULL)
        return (NULL);
    i = 0;
    j = 0;
    k = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == set[j])
        {
            i++;
            j++;
        }
        str[k] = s1[i];
        k++;
        i++;
    }
    return (str);
}