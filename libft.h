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
size_t ft_strlen(const char *str);
int ft_tolower(int i);
int ft_toupper(int i);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *ptr, int value, size_t len);
char *ft_strdup(const char *s1);

#endif