/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:47:46 by asouchet          #+#    #+#             */
/*   Updated: 2023/04/13 13:23:08 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_modified(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_modified(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_modified(str[i]);
		i++;
	}
	return (i);
}

int	ft_printstr(const char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (ft_printstr("(null)"));
	}
	i = ft_putstr_modified(str);
	return (i);
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
