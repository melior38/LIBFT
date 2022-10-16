/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:47:06 by asouchet          #+#    #+#             */
/*   Updated: 2022/09/11 11:10:01 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = strlen(str);
	if (c == 0)
		return (&str[strlen(str)]);
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (0);
}
