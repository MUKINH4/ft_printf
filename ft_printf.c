/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:16:20 by smaragat          #+#    #+#             */
/*   Updated: 2026/06/29 13:39:43 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fstr, ...)
{
	va_list	list;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(list, fstr);
	while (fstr[i])
	{
		if (fstr[i] == '%')
		{
			handle_format(fstr[i + 1], list, &count);
			i += 2;
		}
		else
			ft_putchar(fstr[i++], &count);
		i++;
	}
	va_end(list);
	return (count);
}
