/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:14:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 00:14:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "03_bigger_str_test.h"

int	bigger_str_test(void)
{
	if (ft_strlen(BIG_STR) == strlen(BIG_STR))
		return (0);
	else
		return (-1);
}
