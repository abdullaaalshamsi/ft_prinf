/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:29:52 by abdualsh          #+#    #+#             */
/*   Updated: 2026/04/25 12:19:38 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_hex_val(unsigned long n, t_fmt *f, int upper)
{
	char	*digits;
	char	*prefix;
	int		res;

	digits = ft_xtoa(n, upper);
	if (!digits)
		return (-1);
	prefix = NULL;
	if (f->flag_hash && n != 0)
	{
		if (upper == 1)
			prefix = "0X";
		else
			prefix = "0x";
	}
	res = print_with_padding(f, 0, prefix, digits);
	free(digits);
	return (res);
}
