/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:45:00 by avallete          #+#    #+#             */
/*   Updated: 2017/02/11 01:45:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static unsigned int	ut_strlen(char *src)
{
	unsigned int len;

	len = 0;
	while (*src++)
		++len;
	return (len);
}

static char			*ut_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	return (dest);
}

char				*ut_strdup(char *src)
{
	unsigned int	len;
	char			*dup;

	if (!src || !(src[0]))
		return (NULL);
	len = (ut_strlen(src) + 1);
	if (!(dup = (char*)malloc(sizeof(char) * (len))))
		return (NULL);
	return (ut_strcpy(dup, src));
}
