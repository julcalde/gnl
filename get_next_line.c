/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:48:58 by julcalde          #+#    #+#             */
/*   Updated: 2024/11/07 14:16:30 by julcalde         ###   ########.fr       */
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
	static char	read_chunk[BUFFER_SIZE + 1];
	char		*tmp_buff;
	int			i;

	// ft_strchr

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, NULL, 0) == -1)
		return (NULL);
 	while (ft_strchr(blabla) || i <= 0) // check if there is a \n or read reads 0 bytes
	{
		i = read(fd, tmp_buff, BUFFER_SIZE);
		// append read buffer to return line
		text_storage = NULL;
		ft_append_line(tmp_buff, text_storage);
	}
	// cut the returning line to be only until the \n character 
	// store all following characters in the buffer 
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
