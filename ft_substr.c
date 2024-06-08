/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzakharc <hzakharc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:11:04 by hzakharc          #+#    #+#             */
/*   Updated: 2024/06/06 22:11:05 by hzakharc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*sub;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = (char *)malloc(sizeof(char) * 1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	j = 0;
	while (s[start] && j < len)
		sub[j++] = s[start++];
	sub[j] = '\0';
	return (sub);
}
