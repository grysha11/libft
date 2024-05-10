#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int ft_atoi(const char *str);
int ft_isalnum(unsigned char c);
int ft_isalpha(unsigned char c);
int ft_isascii(unsigned char c);
int ft_isdigit(unsigned char c);
int ft_isprint(unsigned char c);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int ft_strlen(char *str);
int ft_tolower(int i);
int ft_toupper(int i);

#endif