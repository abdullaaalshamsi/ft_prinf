/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:30:09 by abdualsh          #+#    #+#             */
/*   Updated: 2026/04/25 12:20:06 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	process_char(t_fmt *f, va_list *ap)
{
	char	c;

	(void)f;
	c = (char)va_arg(*ap, int);
	return (print_char(c, f));
}
