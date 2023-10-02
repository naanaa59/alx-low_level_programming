#include "main.h"

#define BUFFER_SIZE 1024
/**
 * cp_file - copies the content of a file into another
 *
 * @file_from: the source file
 *
 * @file_to: the destination file
 *
 */


void cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t s_read, s_write;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	while ((s_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		s_write = write(fd_to, buffer, s_read);
		if (s_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
		if (s_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			close(fd_from);
			close(fd_to);
			exit(100);
		}
		dprintf(2, "Successfully copied content from %s to %s\n",
				file_from, file_to);
	}
}
/**
 * main - Entry point
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	cp_file(argv[1], argv[2]);
	return (0);
}
