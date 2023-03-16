/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:39:22 by digil-pa          #+#    #+#             */
/*   Updated: 2023/03/16 12:58:06 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*get_next_line(int fd)
{
	static char		buff[BUFFER_SIZE + 1];
	char		*line;
	int			k;

	k = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		while (buff[k])
			buff[k++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buff[0] || read(fd, buff, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buff);
		if (clean_to_zero(buff))
			break ;
	}
	return (line);
}

/*int main()
{
	int fd;
	int i;
	
	i = 0;
	fd = open("a.txt", O_RDONLY);
	while (i < 8)
	{
		printf("line%d: %s\n", i, get_next_line(fd));
		i++;
	}	
}*/