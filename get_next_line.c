/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:48:58 by julcalde          #+#    #+#             */
/*   Updated: 2024/11/06 16:29:29 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Goal
DESC:	Write a function that returns a line read from a
		file descriptor.
RETURN:	Read line if correct behavior.
		NULL if there is nothing else to read, or an error occurred.
NOTE:	The returned line should include the terminating \n
		character, except if the end of file was reached and
		does not end with a \n character.
NOTE:	Add all the helper functions you need in the get_next_line_utils.c file
*/
/* Read function prototype
int read(int fd, char buffer[], int bytes);
fd:		file descriptor.
buffer:	array where to stock the read chars.
bytes:	number of bytes to read per iteration.
*/

char	*get_next_line(int fd)
{
	char		*text_storage;
	static char	*read_chunk;
	char		*tmp_buff;
	int			i;

	read_chunk = read(fd, tmp_buff, BUFFER_SIZE);
	if (fd < 0 || BUFFER_SIZE < 1 || read_chunk < 0)
		return (free(read_chunk), NULL);
	text_storage = NULL;
	ft_append_line(read_chunk, text_storage);
	return (NULL);
}

static char	*ft_append_line(read_chunk, text_storage)
{
	char	*line;

	line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (line == NULL)
		return (NULL);
	line = (char *)read_chunk;
	return (line);
}
