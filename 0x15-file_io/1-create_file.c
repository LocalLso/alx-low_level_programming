#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <sys/file.h>


/**
 * count - counts string lenth
 * @text_content: pointer
 *
 * Return: Count
 */

int count(char *text_content)
{
	int count, i;

	count = 0;
	for (i = 0; text_content[count] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
/**
 * create_file - creates a file
 * @filename: pointer to print
 * @text_content: pointer to print
 *
 * create_file - creates a file if not created
 * Return: 1 on success
 * Or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, w;
	char *buff;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	len = count(text_content);
	buff = malloc(sizeof(char) * (len));
	text_content = buff;
	if (!buff)
		return (-1);
	w = write(fd, buff, len);
	if (w == -1)
		return (-1);

	close(fd);
	free(buff);
	return (1);
}
