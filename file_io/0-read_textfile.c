#include "main.h"

/***/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor;
	ssize_t caracs_read, caracs_write;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	caracs_read = read(file_descriptor, buffer, letters);
	if (caracs_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	caracs_write = write(STDOUT_FILENO, buffer, caracs_read);

	free(buffer);
	close(file_descriptor);

	if (caracs_write == caracs_read)
		return (caracs_write);
	else
		return (0);
}
