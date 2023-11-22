/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:34:31 by llitovuo          #+#    #+#             */
/*   Updated: 2023/11/20 19:10:04 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief Modified ft_putstr, that takes also int len as a parameter to follow 
 * how many characters were written.
 * 
 * @param str the string that is written to fd 1.
 * @param wlen integer that follows how many characters are written.
 * @return int returns the integer back incremented with letters written.
 */

int	ft_putstr(char *str, int wlen)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		if (ft_putchar(*str, wlen) < 0)
			return (-1);
		wlen += 1;
		str++;
	}
	return (wlen);
}
