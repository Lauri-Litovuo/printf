/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:25:08 by llitovuo          #+#    #+#             */
/*   Updated: 2023/11/20 09:28:11 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c, int wlen);
int	ft_putstr(char *str, int wlen);
int	ft_putnbr_base(long int nbr, int *wlen, int base, char *base_symbols);
int	ft_putptr(unsigned long long nbr, int *wlen, int base, char *base_symbols);
int	ft_printf(const char *str, ...);

#endif