/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:50:22 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/30 15:46:17 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
/*
	You will compile your code as follows (a buffer size of 42 is used as an
	example):
	cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_list
{
	char			*line;
	struct s_list	*next;
}					t_list;


char	*get_next_line(int fd);

#endif