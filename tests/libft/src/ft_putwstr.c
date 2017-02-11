/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 12:44:51 by avallete          #+#    #+#             */
/*   Updated: 2015/01/16 12:45:45 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		ft_putwstr(wchar_t *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i += ft_putwchar(*str);
		str++;
	}
	return (i);
}