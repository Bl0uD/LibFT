/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:26:49 by jdupuis           #+#    #+#             */
/*   Updated: 2024/10/28 20:27:25 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

char	*ft_itoa(int n);
char	*ft_strcat(char *dest, const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strcpy(char *dest, const char *str);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *str, size_t n);
char	*ft_strncpy(char *dest, const char *str, size_t n);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *str, const char *finder, size_t len);
char	*ft_strrchr(const char *str, int c);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(const char *str, const char *finder);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int     ft_isspace(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcasecmp(const char *s1, const char *s2);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmem(const void *src, size_t srclen,
		const void *finder, size_t finderlen);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(int fd, char c);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

size_t	ft_strlcat(char *dest, const char *str, size_t size);

#endif