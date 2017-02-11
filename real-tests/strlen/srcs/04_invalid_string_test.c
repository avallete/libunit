/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_invalid_string_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 10:49:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 10:49:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/04_strlen_invalid_string_test.h"

int	strlen_invalid_string_test(void)
{
	char *t1[10];

	strncpy((char*)t1, "aaaaaaaaaaaa", 11);
	if (ft_strlen((char*)t1) == strlen((char*)t1))
		return (0);
	else
		return (-1);
}
