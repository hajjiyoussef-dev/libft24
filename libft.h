#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *ptr, int value, int size);
void ft_bzero(void *s , size_t num);
int ft_atoi(char *c);
char *ft_memcpy(void *dest, const void *src, int n);
void *ft_memmove(void *dest, const void *src, unsigned int n);
size_t ft_strlcpy(char *dest, const char *src, int size);
size_t ft_strlcat(char *dest, char *src, unsigned int size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s , int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void *ft_calloc(size_t count, size_t size);

#endif