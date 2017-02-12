/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkalia <hkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:53:00 by hkalia            #+#    #+#             */
/*   Updated: 2017/02/11 16:36:01 by hkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

int	ft_printf(const char *fmt, ...);
int	ft_dprintf(int fd, const char *fmt, ...);
int	ft_asprintf(char **ret, const char *fmt, ...);

# if defined(_VA_LIST) || defined(va_arg)

int	ft_vprintf(const char *fmt, va_list arg);
int	ft_vdprintf(int fd, const char *fmt, va_list arg);
int	ft_vasprintf(char **ret, const char *fmt, va_list arg);

# endif

#endif
