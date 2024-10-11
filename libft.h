#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

int ft_atoi( char *str);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *b, int c, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int a);
int ft_isascii(int c);
int ft_isdigit(int a);
int ft_isprint(int c);
char *ft_itoa(int n);
char *ft_strchr(const char *s, int c);
size_t ft_strlen(const char *s);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int a);
int ft_toupper(int a);
int ft_strncmp(const char *s1, const char *s2, size_t n);

#endif