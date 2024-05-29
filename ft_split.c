/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzakharc <hzakharc@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 22:58:07 by hzakharc          #+#    #+#             */
/*   Updated: 2024/05/30 00:14:57 by hzakharc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matrixallocation(char **str, int len1, int len2)
{
	str = malloc(sizeof(char *) * 2);
	if (str == NULL)
		return ;
	str[0] = malloc(sizeof(char) * (len1 + 1));
	if (str[0] == NULL)
		return ;
	str[1] = malloc(sizeof(char) * (len2 + 1));
	if (str[1] == NULL)
		return ;
}

void	ft_matrixassign(const char *s, char **str, int len1)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len1)
	{
		str[0][i] = s[i];
		i++;
	}
	str[0][i] = '\0';
	while (s[i] != '\0')
	{
		str[1][j] = s[i];
		j++;
		i++;
	}
	str[1][j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		len1;
	int		i;
	int		len2;
	char	**str;

	str = NULL;
	len1 = 0;
	len2 = 0;
	i = 0;
	while (s[len1] != c || s[len1] != '\0')
	{
		len1++;
		i++;
	}
	if (s[len1] == '\0')
		return (NULL);
	while (s[i++] != '\0')
		len2++;
	ft_matrixallocation(str, len1, len2);
	ft_matrixassign(s, str, len1);
	return (str);
}
