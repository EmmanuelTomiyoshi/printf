/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:41:24 by etomiyos          #+#    #+#             */
/*   Updated: 2022/10/22 20:41:26 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	condition_s(va_list ptr)
{
	char	*x;
	int		y;

	y = 0;
	x = va_arg(ptr, char *);
	if (x == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (x[y])
	{
		write(1, &x[y], 1);
		y++;
	}
	return (y);
}
