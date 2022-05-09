/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:02:46 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/09 11:31:48 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, size_t n);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void *ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, t_zise n);
void	*ft_memmove(void *str1, const void *str2, t_zise n);
void	*ft_memset(void	*str, int c, t_zise	n);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, t_zise len);
char *ft_strnstr(const char *s, const char *find, size_t len);
char	*ft_strrchr(const char *str, int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

