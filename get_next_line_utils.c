/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:55:22 by digil-pa          #+#    #+#             */
/*   Updated: 2023/03/02 13:25:59 by digil-pa         ###   ########.fr       */
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

char	*ft_strjoin(char *line, char *buffer)
{
	int		k;
	char	*final;

	k = 0;
	final = malloc(ft_strlen(line) + ft_strlen(buffer) + 1);
	if (!final)
		return (NULL);
	while (line && line[k])
	{
		final[k] = line[k];
		k++;
	}
	free (line);
	while (*buffer)
	{
		final[k++] = *buffer;
		if (*buffer++ == '\n')
			break ;
	}
	final[k] = '\0';
	return (final);
}

int	ft_strclean(char *buff)
{
	int	k;
	int	j;
	int	line_completed;

	k = 0;
	j = 0;
	line_completed = 0;
	while (buff[k])
	{
		if (line_completed)
			buff[j++] = buff[k];
		if (buff[k] == '\n')
			line_completed = 1;
		buff[k++] = '\0';
	}
	return (line_completed);
}
