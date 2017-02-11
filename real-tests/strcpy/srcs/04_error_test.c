/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_error_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 07:51:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 07:51:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/04_error_test.h"

int	error_test(void)
{
	char t1[100];
	char t2[100];

	if (ft_strcpy(t1, "bbbb") == strcpy(t2, "bbbb"))
		return (0);
	else
		return (-1);
}
