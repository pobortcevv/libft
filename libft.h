/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:39:34 by sabra             #+#    #+#             */
/*   Updated: 2020/11/02 21:58:14 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT
# define FT_LIBFT

#include <stdlib.h>

void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy (void *dest, const void *src, size_t n);
void			*ft_memmove (void *dest, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
int				ft_isdigit(int c);
char			*ft_strchr(const char *s, int c);
int				ft_strlen(char *str);
//int		ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *str_a, const char *str_b, size_t len);
int				ft_atoi(char *str);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			*ft_calloc(size_t nmemb, size_t size);

#endif
