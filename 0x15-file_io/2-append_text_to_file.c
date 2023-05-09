#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: file
 * @text_content: text
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t n;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		n = write(fp, text_content, strlen(text_content));
		if (n == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
