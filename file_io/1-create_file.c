#include "main.h"

/***/

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t caracs_write;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
												S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		caracs_write = write(file_descriptor, text_content, strlen(text_content));

		if (caracs_write == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
