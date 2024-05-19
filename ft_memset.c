/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzakharc <hzakharc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:33:00 by hzakharc          #+#    #+#             */
/*   Updated: 2024/05/19 17:03:26 by hzakharc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	char	*char_ptr;

	char_ptr = (char *)ptr;
	while (len > 0)
	{
		char_ptr[len - 1] = value;
		len--;
	}
	return (ptr);
}
