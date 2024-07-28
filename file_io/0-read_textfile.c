#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard out
 * @filename: name of the file to read
 * @letters:number of characters to print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file;
	ssize_t total, read_status, write_status;
	size_t bytes_to_read;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1)
		return (0);
	total = 0;
	while (letters > 0)
	{
		bytes_to_read = (letters > BUFSIZE) ? BUFSIZE : letters;
		read_status = read(txt_file, buffer, bytes_to_read);

		if (read_status == -1)
		{
			close(txt_file);
			return (0);
		}
		if (read_status == 0)
			break;

		write_status = write(STDOUT_FILENO, buffer, read_status);

		if (write_status == -1)
		{
			close(txt_file);
			return (0);
		}
		total += read_status;
		letters -= read_status;
	}
	close(txt_file);
	return (total);
}
