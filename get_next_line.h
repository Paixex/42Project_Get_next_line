/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:29:08 by digil-pa          #+#    #+#             */
/*   Updated: 2023/03/16 12:59:54 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*--------------------------------------------------------*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

/*--------------------------------------------------------*/

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

/*--------------------------------------------------------*/

//Prototypes

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
int		clean_to_zero(char *str);

#endif