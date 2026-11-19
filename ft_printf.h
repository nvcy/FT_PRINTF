/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerghad <amerghad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 17:55:06 by amerghad          #+#    #+#             */
/*   Updated: 2026/11/18 17:26:38 by amerghad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
int     ft_printf(const char *format, ...);
void    ft_putstr(char *);
void    ft_printchr(char);
void    ft_putnbr(int);
void    ft_pinthexa(void);
void    ft_printadress(void *);
#endif