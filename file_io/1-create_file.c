#include "main.h"
/**
 * create_file - creates a file with user read and write permissions
 * @filename: name of the file
 * @text_content: contents of the file
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, len, wr_stat;

	if (filename == NULL)
	{
		perror("filename is NULL");
		return (-1);
	}

	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
	{
		perror("Error opening file");
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		wr_stat = write(new_file, text_content, len);
		perror("Error writing to file");
		if (wr_stat == -1)
		{
			close(new_file);
			return (-1);
		}
	}
	if (close(new_file) == -1)
	{
		perror("Error closing file");
		return (-1);
	}

	return (1);
}
