#include "main.h"

/**
* read_textfile- reads a text and prints it out to POSIX stdout
* @filename: name of file to read
* @letters: number of letters to read and print
* Return: the number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t text, fd;
	char *buffer;
	
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	text = read(fd, buffer, letters);
	buffer[letters] = '\0';
	if (text == -1)
		return (0);

	text = write(STDOUT_FILENO, buffer, characters);
	if (text == -1)
		return (0);
	fd = close(fd);
	free(buffer);
	return (text);
}
