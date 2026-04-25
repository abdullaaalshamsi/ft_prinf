/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:30:40 by abdualsh          #+#    #+#             */
/*   Updated: 2026/04/25 12:20:13 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	process_int(t_fmt *f, va_list *ap)
{
	long	n;

	n = (long)va_arg(*ap, int);
	return (print_signed(n, f));
}
