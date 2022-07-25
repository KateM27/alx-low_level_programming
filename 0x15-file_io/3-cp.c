#include "main.h"

/**
 * main - copies content of a file to another file
 * @argc: arguments
 * @argv: array of arguments
 * Return: value
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, wrt, rd;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);

	while ((rd = read(fd_from, buff, 1024)) > 0)
	{
		wrt = write(fd_to, buff, rd);
		if (wrt == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	}
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);

	return (0);
}
