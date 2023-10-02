#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 *
 * @filename: the file to open and read
 *
 * @letters: number of letters to print
 *
 * Return: actual number printed or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc, read_err;
	ssize_t num_print;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	read_err = read(file_desc, buffer, letters);
	if (read_err == -1)
		return (0);

	num_print = write(STDOUT_FILENO, buffer, letters);

	close(file_desc);

	if (num_print == -1)
		return (0);

	return (num_print);

}
