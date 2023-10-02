#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file to append to
 *
 * @text_content: the content to append
 *
 * Return: 1 on suscess -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_value, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL && fd == -1)
		return (-1);

	if (text_content == NULL && fd >= 0)
		return (1);

	len = strlen(text_content);


	w_value = write(fd, text_content, len);

	if (w_value == -1 || w_value != len)
		return (-1);

	close(fd);

	return (1);





}
