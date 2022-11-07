/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:14:25 by asouchet          #+#    #+#             */
/*   Updated: 2022/10/26 16:16:10 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <sys/types.h> //ssize_t library
# include <unistd.h>

# ifndef FD_SIZE
#  define FD_SIZE 4096
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// base existante
int		ft_isalnum(int c);
int		ft_isprint(int c);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcat(char *dest, char const *src, size_t size);
char	*ft_strnstr(const char *hay, const char *need, size_t len);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlcpy(char *dest, char const *src, size_t size);
char	*ft_strrchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// base malloc
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
void	ft_striteri(char *s, void (*f) (unsigned int, char *));

// base fd
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

// bonus 
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

//gnl
char	*ft_new_buffer_start(char *buffer);
char	*ft_gnljoin(char *buffer, char *stash);
char	*ft_get_lines(char	*buffer);
char	*ft_free(char **buffer);
int		ft_read_till_sep(int fd, char **buffer);
char	*get_next_line(int fd);
char	*get_next_line_bonus(int fd);
#endif
