/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:25:21 by asouchet          #+#    #+#             */
/*   Updated: 2022/09/10 23:10:56 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_size;
	size_t	j;

	dest_size = ft_strlen(dest);
	j = 0;
	if (j > n)
		return (ft_strlen((char *)dest + n));
	else
	{
		while (dest && j < n - dest_size - 1)
		{
			dest[dest_size + j] = src[j];
			j++;
		}
	}
	dest[dest_size + j] = '\0';
	return (ft_strlen((char *)dest + n));
}
