#include "main.h"

/**
 * _strlen - function that calculat length
 *
 * @str: array of string
 *
 * Return: The lenght
*/

int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (*str++)
		i++;
	return (i);
}

/**
 * create_file - function that create a file
 *
 * @filename: The name of file
 *
 * @text_content: text add to file
 *
 * Return: 1 Always sucess and 0 if fail
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
