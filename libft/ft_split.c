/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:25:45 by asouchet          #+#    #+#             */
/*   Updated: 2022/10/20 14:25:47 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

/* 
ft_count_sep gere la separation des mots
ft_strlen_until_sep gere les tailles de malloc
ft_split gere les dernier cas non gerer par ft_count_sep

 */
size_t	ft_sep_check(char s, char sep)
{
	if (s == sep)
		return (1);
	return (0);
}

size_t	ft_strlen_until_sep(char const *s, char sep)
{
	size_t	i;

	i = 0;
	while (s[i] != sep && s[i])
		i++;
	return (i);
}

size_t	ft_count_sep(char const *s, char sep)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while(s[i])
	{
		if (s[i] == sep)
		{
		while (ft_sep_check(s[i], sep))
			i++;
		}
		words++;
		i++;
	}
	return (i - words);
}


/*
char	**ft_split(char const *s, char sep)
{


}*/
#include <stdio.h>
int	main(int ac, char **av)
{
	(void) ac;

	printf("%zu", ft_count_sep(av[1], av[2][0]));
	return (0);
}

