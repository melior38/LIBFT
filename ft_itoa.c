/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:12:40 by asouchet          #+#    #+#             */
/*   Updated: 2022/10/21 20:20:51 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	ft_digit_count(int nb)
{
	size_t	count;
	count = 0;
	if (nb == -2147483648)
	{
		count = 11;
		return (count);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		count++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	if (nb < 10)
		count++;
	return (count);
}

char	*ft_itoa(int nb)
{
	char *str;
	long	n;
	int		i;

	n = nb;
	i = ft_digit_count(n);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}

/*
char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	nb;

	nb = n;
	i = ft_digit_count(n);
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	res[i--] = '\0';
	if (nb == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		res[i] = 48 + (n % 10);
		nb = nb / 10;
		i--;
	}
	return (res);
}*/
/*
if (nb == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		nb = 147483648; 
	}
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)	ac;
	printf("%d", ft_digit_count(atoi(av[1])));
	return (0);
}*/