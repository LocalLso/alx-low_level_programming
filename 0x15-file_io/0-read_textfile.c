#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads the file
 * @filename: const char to read
 * @letters: letters to count - in bytes
 *
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * Return: nubmer of bytes read
 * or 0 if fails or NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r,w;
	char *buff;

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	if (!filename)
		return (0);
	/* write */
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		exit(1);
	}
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	close(fd);
	free(buff);

	return (w);

}
