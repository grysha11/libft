/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzakharc <hzakharc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:13:12 by hzakharc          #+#    #+#             */
/*   Updated: 2024/05/31 13:41:45 by hzakharc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = f(i, *s++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
