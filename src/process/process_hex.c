/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:30:12 by abdualsh          #+#    #+#             */
/*   Updated: 2026/04/25 12:20:10 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	process_hex(t_fmt *f, va_list *ap)
{
	unsigned long	n;
	int				upper;

	n = (unsigned long)va_arg(*ap, unsigned int);
	upper = (f->type == 'X');
	return (print_hex_val(n, f, upper));
}
