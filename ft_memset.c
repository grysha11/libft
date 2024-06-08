/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzakharc <hzakharc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:02:15 by hzakharc          #+#    #+#             */
/*   Updated: 2024/06/07 19:17:11 by hzakharc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	char	*str;

	str = (char *)ptr;
	while (len > 0)
	{
		*str = value;
		str++;
		len--;
	}
	return (ptr);
}
