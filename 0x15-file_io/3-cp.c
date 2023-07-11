#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#define BUFFER_SIZE 1024

/**
 * is_valid_args - check number of args
 *
 * @argc: number of args
 * Return: int
 */
int is_valid_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (0);
	}
	return (1);
}

/**
 * is_valid - check helper
 *
 * @n: status
 * @s: filename
 * Return: int
 */
int is_valid(int n, char *s)
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		return (0);
	}
	return (1);
}
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise a non-zero error code
 */
int main(int argc, char *argv[])
{
	int fp_from = open(argv[1], O_RDONLY),
	    fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ssize_t bytes_read, bytes_written;
	char buf[BUFFER_SIZE];

	if (!is_valid_args(argc))
		exit(97);
	if (!is_valid(fp_from, argv[1]))
		return (98);
	if (fp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
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
	if (close(fp_from) == -1 || close(fp_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			(close(fp_to) == -1 ? fp_to : fp_from));
		exit(100);
	}
	return (0);
}
