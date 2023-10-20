/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:41:46 by tlakchai          #+#    #+#             */
/*   Updated: 2023/10/04 04:02:00 by tlakchai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef SIZE_MAX
#  define SIZE_MAX __SIZE_MAX__
# endif

typedef char *string;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

size_t	ft_strlen(const string s);

void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

int		ft_toupper(int c);
int		ft_tolower(int c);

char	*ft_strchr(const string s, int c);
char	*ft_strrchr(const string s, int c);
char	*ft_strdup(const string s1);
int		ft_strncmp(const string s1, const string s2, size_t n);
size_t	ft_strlcat(string dst, const string src, size_t dstsize);
size_t	ft_strlcpy(string dst, const string src, size_t dstsize);
char	*ft_strnstr(const string haystack, const string needle, size_t len);

int		ft_atoi(const string str);

string  ft_substr(const string s, unsigned int start, size_t len);
string  ft_strjoin(const string s1, const string s2);
string  ft_strtrim(const string s1, const string set);
string  *ft_split(const string s, char c);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(string s, int fd);

void	ft_putendl_fd(string s, int fd);

char	*ft_strmapi(const string s, char (*f)(unsigned int, char));
void	ft_striteri(string s, void (*f)(unsigned int, string));
char	*ft_itoa(int n);
void	ft_putnbr_fd(int n, int fd);

#endif
