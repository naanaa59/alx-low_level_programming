#include "main.h"

/**
 * create_file - creat a file with a content
 *
 * @filename: the file name of the created file
 *
 * @text_content: the content
 *
 * Return: 1 on sucess -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_value, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	len = strlen(text_content);

	w_value = write(fd, text_content, len);


	if (w_value == -1 || w_value != len)
		return (-1);

	close(fd);
	return (1);
}
