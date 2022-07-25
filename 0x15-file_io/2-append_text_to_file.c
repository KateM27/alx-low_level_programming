#include "main.h"

/**
* append_text_to_file- appends text at the end of file
* @filename: name of file
* @text_content: NULL terminated string to add at EOF
* Return: 1 on succes, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, apt = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	
	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND,  0600);
	if (fd == -1)
		return (-1);
	
	while (text_content[apt])
		apt++;
	
	fd = write(fd, text_content, apt);
	if (fd == -1)
		return (-1);
	return (1);
}
