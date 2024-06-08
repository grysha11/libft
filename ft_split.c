/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzakharc <hzakharc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:03:15 by hzakharc          #+#    #+#             */
/*   Updated: 2024/06/08 19:26:25 by hzakharc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	matrix_size(const char *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	in_sub;

	i = 0;
	count = 0;
	in_sub = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_sub == 0)
		{
			in_sub = 1;
			count++;
		}
		else if (s[i] == c)
			in_sub = 0;
		i++;
	}
	return (count);
}

char	**free_matrix(char **matrix, size_t string)
{
	while (string > 0)
		free(matrix[--string]);
	free(matrix);
	return (NULL);
}

char	**allocate_substrings(const char *s, char c, char **matrix)
{
	size_t	i;
	size_t	len;
	size_t	string;

	i = 0;
	len = 0;
	string = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			len++;
			i++;
		}
		if ((s[i] == c || s[i + 1] == '\0') && len > 0)
		{
			if (s[i] == '\0')
				len++;
			matrix[string] = malloc(sizeof(char) * (len + 1));
			if (matrix[string] == NULL)
				return (matrix = free_matrix(matrix, string));
			string++;
			len = 0;
		}
		if (s[i != '\0'])
			i++;
	}
	return (matrix);
}

void	assign_matrix(const char *s, char c, char **matrix)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			matrix[j][k] = s[i];
			i++;
			k++;
		}
		if (k > 0)
		{
			matrix[j][k] = '\0';
			j++;
			k = 0;
		}
		if (s[i] != '\0')
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	string_count;

	string_count = matrix_size(s, c);
	matrix = malloc(sizeof(char *) * (string_count + 1));
	if (matrix == NULL)
		return (NULL);
	matrix[string_count] = NULL;
	if (allocate_substrings(s, c, matrix) == NULL)
		return (NULL);
	assign_matrix(s, c, matrix);
	return (matrix);
}

#include <stdio.h>

int main()
{
    // Test case 1
    const char *str1 = "Hello,world,this,is,a,test";
    char **result1 = ft_split(str1, ',');

    // Print the result of test case 1
    printf("Test case 1:\n");
    for (int i = 0; result1[i] != NULL; i++)
    {
        printf("%s\n", result1[i]);
        free(result1[i]); // Free each substring
    }
    free(result1); // Free the array of pointers

    // Test case 2
    const char *str2 = "one::two:::three::::four";
    char **result2 = ft_split(str2, ':');

    // Print the result of test case 2
    printf("Test case 2:\n");
    for (int i = 0; result2[i] != NULL; i++)
    {
        printf("%s\n", result2[i]);
        free(result2[i]); // Free each substring
    }
    free(result2); // Free the array of pointers

    // Test case 3
    const char *str3 = "split,with,,multiple,delimiters,";
    char **result3 = ft_split(str3, ',');

    // Print the result of test case 3
    printf("Test case 3:\n");
    for (int i = 0; result3[i] != NULL; i++)
    {
        printf("%s\n", result3[i]);
        free(result3[i]); // Free each substring
    }
    free(result3); // Free the array of pointers

    return 0;
}