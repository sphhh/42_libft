/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:22:11 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/24 10:57:30 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void	*b, int c, size_t	len);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char	*s1);
char	*ft_substr(char const	*s, unsigned int start, size_t len);
void	*ft_calloc(size_t	count, size_t	size);
char	*ft_strjoin(char const *s1, char const	*s2);
char	*ft_strtrim(char const	*s1, char const	*set);
char	*ft_itoa(int	n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char	*s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char	c, int	fd);
#endif
