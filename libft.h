/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlakchai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:41:46 by tlakchai          #+#    #+#             */
/*   Updated: 2023/10/23 14:11:04 by tlakchai         ###   ########.fr       */
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

typedef char	*t_string;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);

size_t		ft_strlen(const t_string s);

void		*ft_memset(void *b, int c, size_t len);
void		*ft_calloc(size_t count, size_t size);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);

int			ft_toupper(int c);
int			ft_tolower(int c);

t_string	ft_strchr(const t_string s, int c);
t_string	ft_strrchr(const t_string s, int c);
t_string	ft_strdup(const t_string s1);
int			ft_strncmp(const t_string s1, const t_string s2, size_t n);
size_t		ft_strlcat(t_string dst, const t_string src, size_t dstsize);
size_t		ft_strlcpy(t_string dst, const t_string src, size_t dstsize);
t_string	ft_strnstr(const t_string haystack, const t_string needle,
				size_t len);

int			ft_atoi(const t_string str);

t_string	ft_substr(const t_string s, unsigned int start, size_t len);
t_string	ft_strjoin(const t_string s1, const t_string s2);
t_string	ft_strtrim(const t_string s1, const t_string set);
t_string	*ft_split(const t_string s, char c);

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(t_string s, int fd);

void		ft_putendl_fd(t_string s, int fd);

t_string	ft_strmapi(const t_string s, char (*f)(unsigned int, char));
void		ft_striteri(t_string s, void (*f)(unsigned int, t_string));
t_string	ft_itoa(int n);
void		ft_putnbr_fd(int n, int fd);

#endif
