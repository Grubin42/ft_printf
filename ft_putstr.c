/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:30:24 by grubin            #+#    #+#             */
/*   Updated: 2021/11/16 16:04:43 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (c + 6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		c++;
		i++;
	}
	return (c);
}
