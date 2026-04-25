/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:30:57 by abdualsh          #+#    #+#             */
/*   Updated: 2026/04/25 12:20:24 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	process_uint(t_fmt *f, va_list *ap)
{
	unsigned long	n;

	n = (unsigned long)va_arg(*ap, unsigned int);
	return (print_unsigned(n, f));
}
