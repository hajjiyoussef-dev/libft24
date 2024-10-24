#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *c);
void *ft_memset(void *ptr, int value, int size);
void ft_bzero(void *s , int num);
int ft_atoi(char *c);
char *ft_memcpy(void *dest, const void *src, int n);
void *ft_memmove(void *dest, const void *src, unsigned int n);
size_t ft_strlcpy(char *dest, const char *src, int size);
int 	ft_strlcat(char *dest, char *src, unsigned int size);


#endif