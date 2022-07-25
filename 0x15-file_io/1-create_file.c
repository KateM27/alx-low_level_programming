#include "main.h"

/**
* create_file- creates a file
* @filename: name of file to create
* @text_content: NULL terminated string to write
* Return: 1 on succes, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC,  0600);
	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;

	fd = write(fd, text_content, len);
	if (fd == -1)
		return (-1);
	return (1);
}
