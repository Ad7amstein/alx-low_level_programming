#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#define BUFFER_SIZE 1024

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise a non-zero error code
 */
int main(int argc, char *argv[])
{
	int fp_from, fp_to;
	ssize_t bytes_read, bytes_written;
	char buf[BUFFER_SIZE];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	while ((bytes_read = read(fp_from, buf, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fp_to, buf, bytes_read);
		if (bytes_read != bytes_written)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fp_from) == -1 || close(fp_to))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(close(fp_to) == -1 ? fp_to : fp_from));
		exit(100);
	}
	return (0);
}
