/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:11:35 by joao-alm          #+#    #+#             */
/*   Updated: 2024/10/22 22:11:58 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_found;

	last_found = NULL;
	while (*str)
	{
		if (*str == c)
			last_found = str;
		str++;
	}
	if (!c)
		return ((char *)str);
	else
		return ((char *)last_found);
}
