/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:55:22 by digil-pa          #+#    #+#             */
/*   Updated: 2023/01/15 23:42:43 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	k;

	k = 0;
	if (!str)
		return (0);
	while (str[k] && str[k] != '\n')
		k++;
	if (str[k] == '\n')
		k++;
	return (k);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		k;
	char	*j;

	k = 0;
	j = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!j)
		return (NULL);
	while (s1 && s1[k])
	{
		j[k] = s1[k];
		k++;
	}
	free (s1);
	while (*s2)
	{
		j[k++] = *s2;
		if (*s2++ == '\n')
			break ;
	}
	j[k] = '\0';
	return (j);
}

int	ft_strclean(char *str)
{
	int	k;
	int	j;
	int	line;

	k = 0;
	j = 0;
	line = 0;
	while (str[k])
	{
		if (line)
			str[j++] = str[k];
		if (str[k] == '\n')
			line = 1;
		str[k++] = '\0';
	}
	return (line);
}
