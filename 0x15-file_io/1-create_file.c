#include <main.h>
/**
 * create_file - function that creates a file.
 *
 * @filename: file
 * @text_content: text
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t n;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
